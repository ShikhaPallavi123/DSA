//
// Created by Shikha Pallavi on 9/3/24.
//
#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(5);
    pq.push(10);
    pq.push(3);

    cout <<"top: " << pq.top() << endl;
    return 0;
}
