#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int m , a;
	    cin>>m>>a;
	    string s;
	    for(int i=0; i<m ; i++){
	        int e;
	        cin>>e;
	        
	        if(e%a==0){
	          s.push_back('1');
	        }
	        else{
	           s.push_back('0');
	        }
	    }
	    
	    cout<<s<<endl;
	}

}