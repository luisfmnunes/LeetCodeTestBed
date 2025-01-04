#pragma once
#include "SolutionBase.h"

class Unique3LPSolution : public SolutionBase{

protected:

int Unique3LPalindromes(std::string s);

public:

inline void solve() override{
    output_.push_back(std::to_string(Unique3LPalindromes(input_[0])));
}

};