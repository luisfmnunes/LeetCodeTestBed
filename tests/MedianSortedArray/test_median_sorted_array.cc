#include <gtest/gtest.h>
#include "MedianSortedSolution.h"

TEST(MedianSortedSolution, test1){
    MedianSortedSolution solution;
    solution.setInput({"[1,3]", "[2]"});
    solution.solve();
    EXPECT_EQ(std::stod(solution.getOutput()[0]), 2.0);
}

TEST(MedianSortedSolution, test2){
    MedianSortedSolution solution;
    solution.setInput({"[1,2]", "[3,4]"});
    solution.solve();
    EXPECT_EQ(std::stod(solution.getOutput()[0]), 2.5);
}

TEST(MedianSortedSolution, test3){
    MedianSortedSolution solution;
    solution.setInput({"[0,0]", "[0,0]"});
    solution.solve();
    EXPECT_EQ(std::stod(solution.getOutput()[0]), 0.0);
}

TEST(MedianSortedSolution, test4){
    MedianSortedSolution solution;
    solution.setInput({"[1,3]", "[2,7]"});
    solution.solve();
    EXPECT_EQ(std::stod(solution.getOutput()[0]), 2.5);
}