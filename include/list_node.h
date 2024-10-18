#pragma once

#include <vector>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(): val(0), next(nullptr) {}
    ListNode(int x): val(x), next(nullptr) {}
    ListNode(int x, ListNode *next): val(x), next(next) {}
};

ListNode* vectorToListNode(const std::vector<int>& nums);
std::vector<int> ListNodeToVector(ListNode* head);
void printList(ListNode* head);
void freeList(ListNode* head);