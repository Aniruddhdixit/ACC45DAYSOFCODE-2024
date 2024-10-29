#include <iostream>
#include<cmath>
using namespace std;

void chkPrime(int n){
    bool isPrime = true;
    if(n<2){
        isPrime = false;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0){
            isPrime = false;
        }
    }
    if(isPrime){
        cout<<"yes"<<endl;
    } else{
        cout<<"no"<<endl;
    }
}

int main() {
	// your code 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        chkPrime(n);
    }
	return 0;
}