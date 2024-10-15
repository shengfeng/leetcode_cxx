# leetcode_cxx

This project is used to practice leetcode problems with c++. The leetcode website do not offer the UT mechanism to valid whether the solution is right or not. We use the gtest to write UT testcases for each problems.

The [googletest](https://github.com/google/googletest) is Google’s C++ testing and mocking framework.

## install googletest
```shell
git clone https://github.com/google/googletest
cd googletest
mkdir build & cd build
cmake ..
make
sudo make install
```
## structure 
- src: the source file of leetcode problems
- include: the declaration of function
- tests: the unit testcases of problems

## run
```shell
mkdir build & cd build
cmake ..
make
cd tests & ./testcases
```