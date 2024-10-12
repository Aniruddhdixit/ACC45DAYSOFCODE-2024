#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,a;
	unordered_set<int> s;
	cin>>t;
	while(t--){
	    cin>>n;
	    while(n--){
	        cin>>a;
	        if(s.find(a)!=s.end()){
	            s.erase(s.find(a));
	        }
	        else{
	            s.insert(a);
	        }
	    }
	    if(s.size()==0){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	    s.clear();
	}

}