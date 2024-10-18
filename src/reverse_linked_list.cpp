#include "reverse_linked_list.h"

ListNode* ReverseLinkedList::reverseList1(ListNode *head) {
    ListNode* current = head;
    ListNode* pre = nullptr;
    while (current != nullptr) {
        ListNode* tmp = current->next;
        current->next = pre;
        pre = current;
        current = tmp;
    }

    return pre;
}

ListNode* ReverseLinkedList::reverseList2(ListNode *head) {
    return recur(head, nullptr);
}

ListNode* ReverseLinkedList::recur(ListNode *cur, ListNode *pre) {
    if (cur == nullptr) {
        return pre;
    }
    ListNode* res = recur(cur->next, cur);
    cur->next = pre;
    return res;
}