#include<SolutionBase.h>

std::vector<int> SolutionBase::parseIntVector(const std::string& str){
    std::vector<int> vec;
    std::stringstream ss(str.substr(1, str.size()-2));
    std::string item;

    while(std::getline(ss, item, ',')){
        vec.push_back(std::stoi(item));
    }

    return vec;
}

std::vector<float> SolutionBase::parseFloatVector(const std::string& str){
    std::vector<float> vec;
    std::stringstream ss(str.substr(1, str.size()-2));
    std::string item;

    while(std::getline(ss, item, ',')){
        vec.push_back(std::stof(item));
    }

    return vec;
}

std::vector<double> SolutionBase::parseDoubleVector(const std::string& str){
    std::vector<double> vec;
    std::stringstream ss(str.substr(1, str.size() -2));
    std::string item;

    while(std::getline(ss, item, ',')){
        vec.push_back(std::stod(item));
    }

    return vec;
}