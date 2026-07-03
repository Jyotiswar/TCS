#include<iostream>
using namespace std;

class Solution{
    
    string removeDuplicate(string str){
        bool seen[26] = {false};
        string result = "";

        for(char c : str){
            if(!seen[c - 'a']){
                seen[c - 'a'] = true;
                result+=c;
            }
        }
        return result;
    }
};