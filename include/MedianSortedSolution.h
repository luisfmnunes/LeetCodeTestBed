#include "SolutionBase.h"

class MedianSortedSolution : public SolutionBase {

private:
    int quickSearch(int val, const std::vector<int>& vec, int left = 0);

public:
    void solve() override{
        std::vector<int> nums1 = parseIntVector(input_[0]);
        std::vector<int> nums2 = parseIntVector(input_[1]);
        output_.push_back(std::to_string(findMedianSortedArrays(nums1, nums2)));
    }

    double findMedianSortedArrays(const std::vector<int>& nums1, const std::vector<int>& nums2);
};