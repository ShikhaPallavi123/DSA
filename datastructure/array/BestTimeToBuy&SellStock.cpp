//
// Created by Shikha Pallavi on 1/23/25.
//
#include <iostream>
#include <vector>
#include <climits>  // For INT_MAX
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;  // Initialize the minimum price to the largest possible value
        int max_profit = 0;       // Initialize the maximum profit to 0

        // Loop through all prices to find the minimum price and maximum profit
        for (int i = 0; i < prices.size(); i++) {
            // Update the minimum price if we find a lower price
            min_price = min(min_price, prices[i]);

            // Update the maximum profit if the current price minus the min price is greater than the max profit
            max_profit = max(max_profit, prices[i] - min_price);
        }

        return max_profit;  // Return the maximum profit
    }
};

int main() {
    // Create an instance of the Solution class
    Solution sol;

    // Test case 1
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    cout << "Max profit for prices1: " << sol.maxProfit(prices1) << endl;  // Expected output: 5

    // Test case 2
    vector<int> prices2 = {7, 6, 4, 3, 1};
    cout << "Max profit for prices2: " << sol.maxProfit(prices2) << endl;  // Expected output: 0

    // Test case 3
    vector<int> prices3 = {1, 2, 3, 4, 5};
    cout << "Max profit for prices3: " << sol.maxProfit(prices3) << endl;  // Expected output: 4

    return 0;
}
