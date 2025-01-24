//
// Created by Shikha Pallavi on 1/23/25.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;  // Pointer for the last element in nums1's original part
        int j = n - 1;  // Pointer for the last element in nums2
        int k = m + n - 1;  // Pointer for the last element in the merged array

        // Merge the two arrays starting from the end
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
                k--;
            } else {
                nums1[k] = nums2[j];
                j--;
                k--;
            }
        }

        // If there are remaining elements in nums2, copy them
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};

int main() {
    // Test case 1
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};  // nums1 has space for the merged result
    vector<int> nums2 = {2, 5, 6};
    int m = 3;  // Number of elements in the original nums1
    int n = 3;  // Number of elements in nums2

    Solution sol;
    sol.merge(nums1, m, nums2, n);

    // Print the merged result
    cout << "Merged array: ";
    for (int i = 0; i < m + n; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;

    return 0;
}
