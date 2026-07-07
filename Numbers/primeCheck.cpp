#include<iostream>
#include<vector>
using namespace std;

vector<int>sieve(int n){

    vector<int>isPrime(n+1,true);
    isPrime[0] = isPrime[1] = false;

    for(int i = 2; i*i <= n ; i++){

        if(isPrime[i]){
            for(int j = i*i ; j <= n ; j+=i){
                isPrime[i] = false;
            }
        }
    }

    vector<int>primes;
    for(int i = 2 ; i <= n ; i++){
        if(isPrime[i]){
            primes.push_back(i);
        }
    }
    return primes;
}

int main(){
    int n;
    cout<<"Please Enter N"<<endl;
    cin>>n;
    vector<int>res = sieve(n);
    for(int i : res){
        cout<<i<<" ";
    }
}