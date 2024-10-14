#include <gtest/gtest.h>
#include "binary_tree_right_side_view.h"
#include "tree_node.h"

using namespace std;

TEST(BinaryTreeRightSizeViewTest, Test1) {
    vector<int> ret = {1, 3, 4};
    std::string testcase = "[1,2,3,null,5,null,4]";
    RightSideView rsv;
    TreeNode* root = nullptr;
    int status = parseBinaryTree(testcase, &root);
    EXPECT_EQ(status, 0);
    vector<int> ans = rsv.rightSideView(root);
    EXPECT_EQ(ans, ret);
}