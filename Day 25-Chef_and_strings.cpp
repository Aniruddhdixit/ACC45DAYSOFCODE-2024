#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    long long int a[n];
	    cin>>a[0];
	    long long int d=0;
	    for(long long int i=1;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]==a[i-1]){
	        d+=0;}
	        else{
	        d+=abs(a[i]-a[i-1])-1;}
	    }
	    cout<<d<<endl;
	}
}