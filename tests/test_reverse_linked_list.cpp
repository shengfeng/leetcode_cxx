#include <gtest/gtest.h>
#include "list_node.h"
#include "reverse_linked_list.h"

TEST(ReverseLinkedListTest, Test1) {
    ReverseLinkedList rll;
    std::vector<int> input = {1, 2, 3, 4, 5};
    ListNode* head1 = vectorToListNode(input);
    ListNode* current1 = rll.reverseList1(head1);
    std::vector<int> ret1 = ListNodeToVector(current1);
    std::vector<int> ans = {5, 4, 3, 2, 1};
    EXPECT_EQ(ret1, ans);

    ListNode* head2 = vectorToListNode(input);
    ListNode* current2 = rll.reverseList2(head2);
    std::vector<int> ret2 = ListNodeToVector(current2);
    EXPECT_EQ(ret2, ans);
}