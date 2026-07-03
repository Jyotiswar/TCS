#include<iostream>
using namespace std;

class Solution{

    void charFreq(string str){
        int freq[26];

        for(char c : str){
            freq[c-'a']++;
        }
        for(int i = 0 ;i < 26;i++){
            cout<<(char)('a' + i)<<" -> "<<freq[i]<<"\n";
        }
    }
};