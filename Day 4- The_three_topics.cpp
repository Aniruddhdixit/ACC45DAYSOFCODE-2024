#include <bits/stdc++.h>
using namespace std;

int main() {
	int A,B,C,X;
	cin>>A>>B>>C>>X;
	if (A>=1&&A<=10&&B>=1&&B<=10&&C>=1&&C<=10&&X>=1&&X<=10){
	    if(X==A||X==B||X==C)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
return 0;
}