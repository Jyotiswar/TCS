#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void SecondLargest(vector<int>&a, int n){

    int largest = a[0];
    int slargest = -1;
    for(int i = 0; i < n ; i++){
        if(a[i] > largest){
            slargest = largest;
            largest = a[i];
        }else if(a[i] < largest && a[i] > slargest){
            slargest = a[i];
        }
    }
    cout<<slargest<<endl;

}
void SecondMinimum(vector<int>&a, int n){

    int minimum = a[0];
    int sminimum = INT_MAX;
    for(int i = 0 ; i < n;i++){
        if(minimum < a[i]){
            sminimum = minimum;
            minimum = a[i];
        }else if(a[i] > minimum && a[i] < sminimum){
            sminimum = a[i];
        }
    }
}