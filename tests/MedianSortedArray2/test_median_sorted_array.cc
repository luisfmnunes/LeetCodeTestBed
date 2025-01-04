#include <gtest/gtest.h>
#include "MedianSortedSolution2.h"

TEST(MedianSortedSolution2, test1){
    MedianSortedSolution2 solution;
    solution.setInput({"[1,3]", "[2]"});
    solution.solve();
    EXPECT_EQ(std::stod(solution.getOutput()[0]), 2.0);
}

TEST(MedianSortedSolution2, test2){
    MedianSortedSolution2 solution;
    solution.setInput({"[1,2]", "[3,4]"});
    solution.solve();
    EXPECT_EQ(std::stod(solution.getOutput()[0]), 2.5);
}

TEST(MedianSortedSolution2, test3){
    MedianSortedSolution2 solution;
    solution.setInput({"[0,0]", "[0,0]"});
    solution.solve();
    EXPECT_EQ(std::stod(solution.getOutput()[0]), 0.0);
}

TEST(MedianSortedSolution2, test4){
    MedianSortedSolution2 solution;
    solution.setInput({"[1,3]", "[2,7]"});
    solution.solve();
    EXPECT_EQ(std::stod(solution.getOutput()[0]), 2.5);
}

TEST(MedianSortedSolution2, test5){
    MedianSortedSolution2 solution;
    solution.setInput({"[1,2,3,4,5,6,7,8,9,10]", "[11,12,13,14]"});
    solution.solve();
    EXPECT_EQ(std::stod(solution.getOutput()[0]), 7.5);
}