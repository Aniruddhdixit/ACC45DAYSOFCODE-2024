#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,a,b;
	cin>>t;
	while(t--){
	    cin>>n>>a>>b;
	    int i=0,j=0,x;
	    while(n/2!=1){
	        n=n/2;
	        i=i+a;
	        j=j+b;
	    }
	    cout<<i+j+a<<endl;
	}
	return 0;
}