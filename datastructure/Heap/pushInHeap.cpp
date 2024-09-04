//
// Created by Shikha Pallavi on 9/4/24.
//
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Heap{
    vector<int> vec;
public:
    void push(int val){
        vec.push_back(val);
        int x = vec.size()-1; //child index
        int parentIdx = (x-1)/2;

        while(parentIdx >= 0 && vec[x] > vec[parentIdx]){
            swap(vec[x], vec[parentIdx]);

            // update child and parent
            int x = vec.size()-1;
            int parentIdx = (x-1)/2;
        }

    }

    int top(){
        return vec[0];
    }

    bool empty(){
        return vec.size()-1 == 0;
    }
};

int main(){
    Heap heap;
    heap.push(50);
    heap.push(10);
    heap.push(100);

    cout << "top: " << heap.top() << endl;

    return 0;
}