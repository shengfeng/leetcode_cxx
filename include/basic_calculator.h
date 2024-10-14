#ifndef BASIC_CALCULATOR_H
#define BASIC_CALCULATOR_H
#include <string>

using namespace std;

class BasicCalculator {
public:
    BasicCalculator();
    ~BasicCalculator();
    int calculate(string s);
};

#endif