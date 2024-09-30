#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
	    int n,x;
	    cin >> n >> x;
	    
	    if(n % 2 == 0){
	        cout << "YES" << endl;
	    }
	    else{
	        if(x % 2 == 1){
	            cout << "YES" << endl;
	        }
	        else{
	            cout << "NO" << endl;
	        }
	    }
	}
}