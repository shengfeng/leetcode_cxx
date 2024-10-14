#include <iostream>
#include "basic_calculator.h"
#include "binary_tree_right_side_view.h"

int main() {
    string input = "(1+(4+5+2)-3)+(6+8)";
    BasicCalculator bc;
    int ret = bc.calculate(input);
    std::cout << ret << std::endl;

    std::string testcase = "[1,2,3,null,5,null,4]";
    RightSideView rsv;
    TreeNode* root = nullptr;
    int status = parseBinaryTree(testcase, &root);
    if (status != 0) {
        std::cout << "parse binary tree error" << std::endl;
        return 0;
    }
    vector<int> ans = rsv.rightSideView(root);
    for (int i = 0; i < ans.size(); i++) {
        std::cout << ans[i] << " ";
    }
    std::cout << std::endl;
}
