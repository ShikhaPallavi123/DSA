//
// Created by Shikha Pallavi on 9/4/24.
//
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(2);
    pq.push(1);
    pq.push(8);
    pq.push(5);
    pq.push(3);
    pq.push(10);

    cout << "max heap: " << endl;
    while(!pq.empty()){
        cout << pq.top() << endl;
        pq.pop();
    }
    return 0;

}
