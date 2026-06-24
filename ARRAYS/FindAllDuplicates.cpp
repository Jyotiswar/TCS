#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void FindDuplicate(vector<int>&a, int n){
    unordered_map<int,int>freq;

    for(int i = 0 ; i < n ; i++){
        freq[a[i]]++;
    }

    for(auto& p : freq){
        if(p.second > 1){
            cout<<p.first<<" ";
        }
    }
}