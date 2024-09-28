#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
	   return true;
	}
	return false;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	for(int i = 0; i < t; i++){
	    int n;
	    string s;
	    cin >> n;
	    cin >> s;
	    
	    int count = 0;
	    bool hard = false;
	    
	    for(int j = 0; j < n; j++){
	        if(isVowel(s[j])){
	            count = 0;
	        }
	        else{
	            count++;
	        }
	        
	        if(count == 4){
	            hard = true;
	            break;
	        };
	        
	        
	    }
	    
	    if(hard){
	        cout << "NO" << endl;
	    }
	    else{
	        cout << "YES" << endl;
	    }
	}
}