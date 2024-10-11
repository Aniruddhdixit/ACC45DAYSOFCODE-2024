#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int a,b,c,d;
	for(int i=1;i<=t;i++){
	    cin>>a>>b>>c>>d;
	    int ans = max(a,b)+max(c,d);
	    cout<<ans<<endl;
	}

}