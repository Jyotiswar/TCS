#include<iostream>
#include<vector>
using namespace std;

void MoveToEnd(vector<int>&a, int n){
    int j = 0;
    //copy all the when non zero
    for(int i = 0 ; i < n ;i++){
        
        if(a[i] != 0){
            if(i!=j){
                a[j++] = a[i];
            }
        }
    }
    //traverse and append zeros in the left off space of the array
    while(j<n){
        a[j++] = 0;
    }
}