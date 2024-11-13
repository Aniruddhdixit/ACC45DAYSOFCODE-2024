#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int res1=min(a,b);
	    int res=min(res1,c);
	    int sum=a+b+c;
	    cout<<sum-res<<endl;
	    }
	return 0;
}