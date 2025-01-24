#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n;
        int ans = 0;  // Declare and initialize ans to store the XOR result

        n = nums.size();  // Get the size of the array

        // Loop through the array and apply XOR on each element
        for (int i = 0; i < n; i++) {
            ans ^= nums[i];  // XOR current element with ans
        }

        return ans;  // Return the result, which is the single number
    }
};

int main() {
    // Create an instance of the Solution class
    Solution sol;

    // Test case 1
    vector<int> nums1 = {4, 1, 2, 1, 2};
    cout << "Single number in nums1: " << sol.singleNumber(nums1) << endl;  // Expected output: 4

    // Test case 2
    vector<int> nums2 = {2, 2, 1};
    cout << "Single number in nums2: " << sol.singleNumber(nums2) << endl;  // Expected output: 1

    // Test case 3
    vector<int> nums3 = {1};
    cout << "Single number in nums3: " << sol.singleNumber(nums3) << endl;  // Expected output: 1

    return 0;
}
