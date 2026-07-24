#include<iostream>
#include<vector>
using namespace std;
class Solution{
    void MoveZerosToEnd(vector<int>arr){
        int pos = 0;
        int n = arr.size();
        for(int i = 0 ;i < n;i++){
            if(arr[i] != 0){
                swap(arr[i],arr[pos]);
                pos++;
            }
        }
    }
};