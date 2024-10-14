#include <stack>
#include <string>
#include <iostream>
#include "basic_calculator.h"

using namespace std;

BasicCalculator::BasicCalculator() {
    std::cout << "basic calculator constructor" << std::endl;
};

BasicCalculator::~BasicCalculator() {
    std::cout << "basic calculator deconstructor" << std::endl;
};

int BasicCalculator::calculate(string s) {
    stack<int> stk;
    stk.push(1);

    int res = 0, num = 0, op = 1;
    for (char ch : s) {
        if (ch >= '0' && ch <= '9') {
            num = num * 10 + (ch - '0');
            continue;
        }

        res += op * num;
        num = 0;

        if (ch == '+') op = stk.top();
        else if (ch == '-') op = -stk.top();
        else if (ch == '(') stk.push(op);
        else if (ch == ')') stk.pop();
    }
    res += op * num;
    return res;
}