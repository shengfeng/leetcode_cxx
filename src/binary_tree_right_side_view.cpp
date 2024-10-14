#include <queue>
#include "binary_tree_right_side_view.h"

std::vector<int> RightSideView::rightSideView(TreeNode *root) {
    if(root == nullptr) {
        return vector<int>();
    }

    queue<TreeNode*> que;
    que.push(root);
    vector<int> ans;

    while(!que.empty()) {
        int len = que.size();
        TreeNode* tmp;
        for (int i = 0; i < len; i++) {
            tmp = que.front();
            que.pop();
            if (tmp->left) que.push(tmp->left);
            if (tmp->right) que.push(tmp->right);
        }
        ans.push_back(tmp->val);
    }
    return ans;
};
