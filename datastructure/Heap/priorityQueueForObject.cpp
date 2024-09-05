//
// Created by Shikha Pallavi on 9/4/24.
//
#include<iostream>
#include<queue>
#include<string>
#include<vector>
using namespace std;


class Heap{
    vector<int> vec;
public:
    void push(int val){
        vec.push_back(val);
        int x = vec.size()-1; // child index
        int parentIdx = (x-1)/2;

        while(parentIdx >= 0 && vec[x] > vec[parentIdx]){
            swap(vec[x],vec[parentIdx]);

            //update child and parent index
            int x = vec.size()-1;
            int parentIdx = (x-1)/2;
        }
    }

    int top(){
        return vec[0];
    }

    bool empty(){
        return vec.size() == 0;
    }

    void heapify(int i){ // i = parentIdx
        if(i >= vec.size()){
            return;
        }
        int l = 2 * i + 1;
        int r = 2 * i + 2;

        int maxIdx = i;
        if(l < vec.size() && vec[l] > vec[maxIdx]){
            maxIdx = l;
        }
        if(r < vec.size() && vec[r] > vec[maxIdx]){
            maxIdx = r;
        }

        swap(vec[i], vec[maxIdx]);
        if(maxIdx != i){ //swaping their child node
            heapify(maxIdx);

        }

    }
    void pop(){
        swap(vec[0] , vec[vec.size()-1]);
        vec.pop_back();
        heapify(0);
    }
};

class Student{
public:
    string name;
    int marks;
    Student(string name, int marks){
        this->name = name;
        this->marks = marks;
    }

    bool operator< (const Student &obj) const{
        return this->marks < obj.marks;
    }

};

int main(){
    priority_queue<Student> pq;
    pq.push(Student("aman" , 85));
    pq.push(Student("bhumika" , 95));
    pq.push(Student("chetan" , 65));

    while(!pq.empty()){
        cout << "top: " << pq.top().name << " " <<  pq.top().marks << endl;
        pq.pop();
    }
    return 0;
}