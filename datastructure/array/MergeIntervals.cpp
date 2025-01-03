//
// Created by Shikha Pallavi on 1/3/25.
//
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals){
        vector<vector<int>> merged;
        sort(intervals.begin(), intervals.end());
        for(int i = 0; i < intervals.size(); i++){
            if(merged.empty() || merged.back()[1] < intervals[i][0]){
                merged.push_back(intervals[i]);
            }else{
                merged.back()[1] = max(merged.back()[1], intervals[i][1]);
            }
        }
        return merged;
    }
};

int main() {
    vector<vector<int>> intervals1 = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> intervals2 = {{1, 4}, {4, 5}};

    Solution sol;

    vector<vector<int>> result1 = sol.merge(intervals1);
    vector<vector<int>> result2 = sol.merge(intervals2);

    // Print results
    cout << "Merged intervals for intervals1: ";
    for (size_t i = 0; i < result1.size(); ++i) {
        cout << "[" << result1[i][0] << "," << result1[i][1] << "] ";
    }
    cout << endl;

    cout << "Merged intervals for intervals2: ";
    for (size_t i = 0; i < result2.size(); ++i) {
        cout << "[" << result2[i][0] << "," << result2[i][1] << "] ";
    }
    cout << endl;

    return 0;
}