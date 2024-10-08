#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y, a;
	cin>>t;
	while(t) {
	    cin>>x>>y;
	    a = x - y;
	    if(a < 0)
	        a *= -1;
	    cout<<a<<endl;
	    t--;
	}
	return 0;
}