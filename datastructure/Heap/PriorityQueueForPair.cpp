//
// Created by Shikha Pallavi on 9/4/24.
//
#include<iostream>
#include<queue>
#include<string>
#include<vector>
using namespace std;

struct comparePair{
    bool operator() (pair<string, int> &p1, pair<string, int> &p2 ){
        return p1.second < p2.second;
    }
};

int main(){
    priority_queue<pair<string, int>, vector<pair<string , int>>, comparePair> pq;
    pq.push(make_pair("aman", 500));
    pq.push(make_pair("bhumika", 1000));
    pq.push(make_pair("chetan", 2000));

    while(!pq.empty()){
        cout << "top: " << pq.top().first << ", " << pq.top().second << endl;
        pq.pop();
    }
    return 0;
}