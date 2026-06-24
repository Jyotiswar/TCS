#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void ReverseInPlace(vector<int>&a, int n){
    int left = 0;
    int right = n-1;

    while(left < right){
        swap(a[left],a[right]);
        left++,right--;
    }
}
