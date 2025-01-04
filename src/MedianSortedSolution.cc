#include "MedianSortedSolution.h"

using namespace std;

int MedianSortedSolution::quickSearch(int val, const vector<int>& vec, int left){
    int l = left, r = vec.size() - 1;

    while(l <= r){
        int mid = l + (r-l)/2;
        if(val == vec[mid]) return mid + 1;
        else if(val < vec[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }

    return l + (r-l)/2;
}

double MedianSortedSolution::findMedianSortedArrays(const vector<int>& nums1, const vector<int>& nums2){
    std::vector<int> merge{};
    int left1 = 0, right1 = 0, left2 = 0, right2 = 0;

    while(right1 < nums1.size() && right2 < nums2.size()){
        if(nums1[right1] < nums2[right2]){
            right1 = quickSearch(nums2[right2], nums1, left1);
            merge.insert(merge.end(), nums1.begin() + left1, nums1.begin() + right1);
            left1 = right1;
        } else {
            right2 = quickSearch(nums1[right1], nums2, left2);
            merge.insert(merge.end(), nums2.begin() + left2, nums2.begin() + right2);
            left2 = right2;
        }

    }

    if(right1 < nums1.size()) merge.insert(merge.end(), nums1.begin() + right1, nums1.end());
    if(right2 < nums2.size()) merge.insert(merge.end(), nums2.begin() + right2, nums2.end());

    return merge.size() % 2 ? merge[merge.size()/2.0] : ((double)(merge[merge.size()/2] + merge[merge.size()/2 - 1]))/2.0;
}