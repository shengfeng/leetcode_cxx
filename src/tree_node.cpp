#include "tree_node.h"

int tokenize(std::string& rawString, std::queue<token>& tokenQueue) {
    int digit = 0;
    bool digitFlag = false;
    for (int i = 0; i < rawString.size(); i++) {
        if (rawString[i] <= '9' && rawString[i] >= '0') {
            digit = digit * 10 + (rawString[i] - '0');
            digitFlag = true;
        } else if (rawString[i] == ',') {
            if (digitFlag) {
                tokenQueue.push(token{true, digit});
            }
            digitFlag = false;
            digit = 0;
        } else if (rawString[i] == ' ' || rawString[i] == '[') {
            continue;
        } else if (rawString[i] == ']') {
            if (digitFlag) {
                tokenQueue.push(token{true, digit});
            }
            continue;
        } else if (rawString[i] == 'n' && i + 3 < rawString.size() && rawString[i + 1] == 'u' &&
                   rawString[i + 2] == 'l' && rawString[i + 3] == 'l') {
            i += 3;
            tokenQueue.push(token{false, 0});
        } else {
            return -1;
        }
    }
    return 0;
}

void cleanTreeNode(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    cleanTreeNode(root->left);
    cleanTreeNode(root->right);
    delete root;
}

// parse leetcode input to a tree
// input format example: "[1,2,5,3,4,null,6]
// return status: 0: success, -1: parse error, -2: tree structure invalid
int parseBinaryTree(std::string& rawString, TreeNode** pRoot) {
    *pRoot = nullptr;
    std::queue<token> tokenQueue;
    int status = tokenize(rawString, tokenQueue);
    if (status != 0) {
        return -1;
    }
    if (tokenQueue.empty() || !tokenQueue.front().isDigit) {
        return 0;
    }

    std::queue<TreeNode*> nodeQueue;
    int rootVal = tokenQueue.front().digit;
    tokenQueue.pop();
    *pRoot = new TreeNode(rootVal);
    nodeQueue.push(*pRoot);

    while (!nodeQueue.empty()) {
        TreeNode* currentNode = nodeQueue.front();
        nodeQueue.pop();
        if (!tokenQueue.empty()) {
            token leftChild = tokenQueue.front();
            tokenQueue.pop();
            if (leftChild.isDigit) {
                currentNode->left = new TreeNode(leftChild.digit);
                nodeQueue.push(currentNode->left);
            }
        }
        if (!tokenQueue.empty()) {
            token rightChild = tokenQueue.front();
            tokenQueue.pop();
            if (rightChild.isDigit) {
                currentNode->right = new TreeNode(rightChild.digit);
                nodeQueue.push(currentNode->right);
            }
        }
    }
    if (!tokenQueue.empty()) {
        cleanTreeNode(*pRoot);
        return -2;
    }
    return 0;
}
