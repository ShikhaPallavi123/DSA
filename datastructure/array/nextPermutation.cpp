//
// Created by Shikha Pallavi on 1/3/25.
//
#include <iostream>
#include <vector>
#include <algorithm> // For reverse and swap
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int piv = -1;
        int n = nums.size();

        // Step 1: Find the pivot
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                piv = i;
                break;
            }
        }

        // Step 2: If no pivot, reverse the entire array
        if (piv == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 3: Find the element to swap with the pivot
        for (int i = n - 1; i > piv; i--) {
            if (nums[i] > nums[piv]) {
                swap(nums[i], nums[piv]);
                break;
            }
        }

        // Step 4: Reverse the suffix
        reverse(nums.begin() + piv + 1, nums.end());
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3}; // Example input

    cout << "Original array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    solution.nextPermutation(nums);

    cout << "Next permutation: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
