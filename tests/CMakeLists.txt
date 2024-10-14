find_package(GTEST REQUIRED)

include_directories(${PROJECT_SOURCE_DIR}/gtest/googletest/googletest/include)
link_directories(${PROJECT_SOURCE_DIR}/gtest/googletest/build/lib)

add_executable(testcases
        test_basic_calculator.cpp
        ${PROJECT_SOURCE_DIR}/src/basic_calculator.cpp
)

target_link_libraries(testcases
        ${GTEST_LIBRARIES}
        gtest
        gtest_main
        pthread
)

gtest_discover_tests(testcases)