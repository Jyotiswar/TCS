#include <iostream>
using namespace std;

void reverseString(string& str){
    int left = 0, right = str.length()-1;
    while (left < right)
    {
        swap(str[left],str[right]);
        left++,right--;
    }
    
}
int main(){
    string s = "hello";
    reverseString(s);
    cout<<s;
}