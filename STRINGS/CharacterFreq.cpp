#include<iostream>
using namespace std;

class Solution{

    void charFreq(string str){
        int freq[26];

        for(int i = 0 ; i < str.length()-1;i++){
            freq[str[i]-'a']++;
        }
        for(int i = 0 ;i < 26;i++){
            cout<<(char)('a' + i)<<" -> "<<freq[i]<<"\n";
        }
    }
};