#include<gtest/gtest.h>
#include "Unique3LPSolution.h"

TEST(Unique3LPSolution, test1){
    Unique3LPSolution solution;
    solution.setInput({"aabca"});
    solution.solve();
    EXPECT_EQ(std::stoi(solution.getOutput()[0]), 3);
}