#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{

    void RotateK(vector<int>arr, int k){
        int  n = arr.size();
        int k = k%n;
        //reverse all
        reverse(arr.begin(),arr.end());
        //reverse first k
        reverse(arr.begin(),arr.begin()+k);
        //reverse rest
        reverse(arr.begin()+k,arr.end());
    }
    void RotateWithAdditionalArray(vector<int>arr, int k){
        
        //calculate the new index of an existing element and put that into the new index;
        // new_idx = (old_idx + k) % n;
        int n = arr.size();
        vector<int>temp;
        for(int i = 0 ; i < n ;i++){
            //new index
            int idx = (i+k) % n;
            temp[idx] = arr[i];
        }
        //copy temp back into original array
        arr = temp;
        
    }
};