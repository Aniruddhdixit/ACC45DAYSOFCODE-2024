#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a, b;
	    cin >> a >> b;
	    int count = 1;
	    while(a >= 0 && b >= 0){
	        a = a - count;
	        if(a < 0){
	            break;
	        }
	        count++;
	        
	        b = b - count;
	        if(b < 0){
	            break;
	        }
	        count++;
	    }
	    
	    if(a < 0){
	        cout << "Bob" << endl;
	    }
	    else{
	        cout << "Limak" << endl;
	    }
	}
}