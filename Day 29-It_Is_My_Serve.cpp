#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int p,q;
	    cin>>p>>q;
	    int val = p+q;
	    if(val%4==0 || val%4==1){
	        cout<<"Alice"<<endl;
	    }else if(val%4==2 || val%4==3){
	        cout<<"Bob"<<endl;
	    }
	    
	}
	return 0;
}