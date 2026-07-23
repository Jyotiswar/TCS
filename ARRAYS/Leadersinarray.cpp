#include<iostream>
#include<vector>
using namespace std;
class Solutions{
    vector<int>LeaderInArray(vector<int>arr){

        vector<int>leaders;
        int n = arr.size();
        //considering the last element as always a leader cause nothing is there after that element in the right side;

        int max_from_right = arr[n-1];
        leaders.push_back(max_from_right);
        //iterate a loop onto the original array from n-2, mark the larger elements from the back
        for(int i = n-2 ; i >=0 ; i--){
            if(arr[i] > max_from_right){
                max_from_right = arr[i];
                leaders.push_back(max_from_right);
            }
        }
        //as we store from back, reverse it to get the correct sequence;
        reverse(leaders.begin(),leaders.end());

    }
};