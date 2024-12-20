//
// Created by Shikha Pallavi on 12/20/24.
//

#include<iostream>
#include<vector>
#include <unordered_set>

using namespace std;


class  Solution{
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid){
        int n = grid.size();
        long long expectedSum = (long long)(n*n)*(n*n+1)/2;
        long long actualSum = 0;
        unordered_set<int> seen; // set for tracking
        int repeated = -1;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int num = grid[i][j];
                actualSum = actualSum+num;
                if(seen.count(num)){
                    repeated = num;
                }else{
                    seen.insert(num);
                }
            }
        }

        int missing = expectedSum - (actualSum - repeated);
        return{repeated, missing};

    }


};


int main(){
    vector<vector<int>> grid = {{1, 3}, {2, 2}};

    Solution sol;
    vector<int> result = sol.findMissingAndRepeatedValues(grid);

    cout << "repeated = " << result[0] << " ";
    cout << "missing = " << result[1] << " " << endl;


    return 0;


}