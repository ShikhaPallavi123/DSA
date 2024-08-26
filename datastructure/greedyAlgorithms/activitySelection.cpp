//
// Created by Shikha Pallavi on 8/25/24.
//
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int maxActivities(vector<int> start, vector<int> end){
    int count = 1;
    int currEndTime = end[0];
    for(int i = 1; i < start.size(); i++){
        if(start[i] >= currEndTime){
            count++;
            currEndTime = end[i];
        }
    }
    return count;
}
int main(){
    vector<int> start;
    start.push_back(1);
    start.push_back(3);
    start.push_back(0);
    start.push_back(5);
    start.push_back(8);
    start.push_back(5);

    vector<int> end;
    end.push_back(2);
    end.push_back(4);
    end.push_back(6);
    end.push_back(7);
    end.push_back(9);
    end.push_back(9);
    cout << maxActivities(start, end) << endl;
    return 0;
}
