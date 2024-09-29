#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	for(int i = 0; i < t; i++){
	    int ddsa, dtoc, ddm;
	    cin >> ddsa >> dtoc >> ddm;
	    int sdsa, stoc, sdm;
	    cin >> sdsa >> stoc >> sdm;
	    
	    int td = ddsa + dtoc + ddm;
	    int ts = sdsa + stoc + sdm;
	    
	    if(td > ts){
	        cout << "DRAGON" << endl;
	    }
	    else if(ts > td){
	        cout << "SLOTH" << endl;
	    }
	    else{
	        if(ddsa > sdsa){
	            cout << "DRAGON" << endl;
	        }
	        else if(sdsa > ddsa){
	            cout << "SLOTH" << endl;
	        }
	        else{
	            if(dtoc > stoc){
	                cout << "DRAGON" << endl;
	            }
	            else if(stoc > dtoc){
	                cout << "SLOTH" << endl;
	            }
	            else{
	                cout << "TIE" << endl;
	            }
	        }
	    }
	}
}