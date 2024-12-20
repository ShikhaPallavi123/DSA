//
// Created by Shikha Pallavi on 12/19/24.
//
// Boyer-moore voting algorithm
#include<iostream>
#include <vector>
using namespace std;
// Boyer-moore voting algorithm
class solution{
public:
    int majorityElement(vector<int>& nums) {

        int count = 0;
        int element = 0;

        for(int i = 0; i < nums.size(); i++){
            if(count == 0){
                element = nums[i];
                count = 1;
            }else if(element == nums[i]){
                count++;
            }else{
                count--;
            }
        }

        return element;

    }

};

int main(){
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    solution sol;
    int result = sol.majorityElement(nums);
    cout << result << endl;

    return 0;
}



// brut force
//        for (int i = 0; i < nums.size(); i++) {
//            int count = 0;
//            for (int j = 0; j < nums.size(); j++) {
//                if (nums[j] == nums[i]) {
//                    count++;
//                }
//            }
//            if (count > nums.size() / 2) {
//                return nums[i];
//            }
//        }
//
//        return -1;
//    }


