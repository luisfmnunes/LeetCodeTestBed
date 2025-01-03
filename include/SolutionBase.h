#pragma once

#include <vector>
#include <string>
#include <iostream>
#include <gtest/gtest.h>

class SolutionBase {

public:
    virtual ~SolutionBase() = default;

    virtual void solve() = 0;

    virtual void setInput(const std::vector<std::string>& input){
        input_ = input;
    }

    virtual void setOutput(const std::vector<std::string>& output){
        output_ = output;
    }

    virtual std::vector<int> parseIntVector(const std::string& str);
    virtual std::vector<float> parseFloatVector (const std::string& str);
    virtual std::vector<double> parseDoubleVector(const std::string& str);

protected:
    std::vector<std::string> input_;
    std::vector<std::string> output_;
};