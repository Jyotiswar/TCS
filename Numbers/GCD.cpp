#include<iostream>
using namespace std;
int gcd(int a, int b){
    while(b!=0){
        int temp = b;
        b =  a % b;
        temp = a;
    }
    return a;
}
int main(){
    int a,b;
    cout<<"Please Enter a and b"<<endl;
    cin>>a>>b;
    cout<<"GCD is : "<<gcd(a,b);
    
}