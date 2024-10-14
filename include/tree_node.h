#pragma once

#include <string>
#include <queue>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

struct token {
    bool isDigit;
    int digit;
    token(bool i, int d): isDigit(i), digit(d) {}
};

int tokenize(std::string& rawString, std::queue<token>& tokenQueue);
void cleanTreeNode(TreeNode* root);
// parse leetcode input to a tree
// input format example: "[1,2,5,3,4,null,6]
// return status: 0: success, -1: parse error, -2: tree structure invalid
int parseBinaryTree(std::string& rawString, TreeNode** pRoot);