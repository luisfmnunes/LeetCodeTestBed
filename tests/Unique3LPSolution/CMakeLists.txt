add_executable(test_unique_3lp test_unique_3lp.cc)
target_link_libraries(test_unique_3lp Unique3LPSolution SolutionBase GTest::GTest GTest::Main)

gtest_discover_tests(test_unique_3lp)