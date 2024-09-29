#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	for(int i = 0; i < t; i++){
	    int n,x;
	    cin >> n;
	    cin >> x;
	    
	    int quo = n/6;
	    int rem = n%6;
	    
	    if(rem != 0){
	        quo++;
	    }
	    cout << x*quo << endl;
	}
}