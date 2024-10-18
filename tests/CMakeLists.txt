find_package(GTEST REQUIRED)

include_directories(${PROJECT_SOURCE_DIR}/gtest/googletest/googletest/include)
link_directories(${PROJECT_SOURCE_DIR}/gtest/googletest/build/lib)

add_executable(testcases
        test_basic_calculator.cpp
        ${PROJECT_SOURCE_DIR}/src/basic_calculator.cpp
        test_binary_tree_right_size.cpp
        ${PROJECT_SOURCE_DIR}/src/binary_tree_right_side_view.cpp
        ${PROJECT_SOURCE_DIR}/src/tree_node.cpp
        test_koko_eating_bananas.cpp
        ${PROJECT_SOURCE_DIR}/src/koko_eating_bananas.cpp
        test_edit_distance.cpp
        ${PROJECT_SOURCE_DIR}/src/edit_distance.cpp
        test_lru_cache.cpp
        ${PROJECT_SOURCE_DIR}/src/lru_cache.cpp
        test_reverse_linked_list.cpp
        ${PROJECT_SOURCE_DIR}/src/list_node.cpp
        ${PROJECT_SOURCE_DIR}/src/reverse_linked_list.cpp
)

target_link_libraries(testcases
        ${GTEST_LIBRARIES}
        gtest
        gtest_main
        pthread
)

gtest_discover_tests(testcases)