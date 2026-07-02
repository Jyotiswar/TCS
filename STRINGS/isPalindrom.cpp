#include<iostream>
using namespace std;

bool isPalindrome(string s){
    int left = 0;
    int right = s.length()-1;

    while(left < right){
        if(s[left]!=s[right]) 
            return false;
        else
            left++,right--;    
    }
    return true;

}
int main(){
    cout<<isPalindrome("racecar")<<"\n";
    cout<<isPalindrome("hello")<<"\n";
}