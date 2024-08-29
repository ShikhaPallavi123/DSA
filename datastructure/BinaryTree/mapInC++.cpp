//
// Created by Shikha Pallavi on 8/28/24.
//
#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<int, string> m;
    m[101] = "Rahul";
    m[110] = "Neha";
    m[131] = "Shikha";

    for(auto it: m){
        cout << "Key = " << it.first << ", " << "Value = " << it.second << endl;
    }

    return 0;
}