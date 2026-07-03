#include<iostream>
using namespace std;
class Solution{
    char maxOccuringCharacter(string str){
        
        int freq[26];
        
        for(char c : str){
            freq[c - 'a']++;
        }
        int maxIdx = 0;
        for (int i = 1; i < 26; i++)
        {
            if(freq[i] > freq[maxIdx]){
                maxIdx = i;
            }
        }
        
        return 'a' + maxIdx;
    }
};