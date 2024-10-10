#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	
	while(t--)
	{
	    cin>>n;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int count=1,max_count=1;
	    sort(a,a+n);
	    for(int i=0;i<n-1;i++)
	    {
	        if(a[i+1]==a[i])
	        {
	            count++;
	        }
	        if(a[i+1]!=a[i] || i==n-2)
	        {
	            if(max_count<count)
	            {
	                max_count=count;
	            }
	            count=1;
	        }
	    }
	    
	    cout<<n-max_count<<endl;
	    
	}

}