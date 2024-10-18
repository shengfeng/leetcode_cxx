#pragma once

#include "list_node.h"

class ReverseLinkedList {
public:
    ListNode* reverseList1(ListNode* head);
    ListNode* reverseList2(ListNode* head);
private:
    ListNode* recur(ListNode* cur, ListNode* pre);
};