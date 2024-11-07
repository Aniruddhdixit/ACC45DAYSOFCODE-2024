#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll l,k;
	    cin>>l>>k;
	    if(l%k==0)
	    cout<<"0"<<endl;
	    else
	    cout<<"1"<<endl;
	}
	return 0;
}