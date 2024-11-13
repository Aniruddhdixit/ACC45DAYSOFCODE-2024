#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0)
	{
	    int n;
	    cin>>n;
	    int i;
	    int k;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    cin>>k;
	    int temp=a[k-1];
	    sort(a,a+n);
	    for(i=0;i<n;i++)
	    {
	        if(a[i]==temp)
	        {
	        cout<<(i+1)<<endl;
	        }
	    }
	    t--;
	}
	return 0;
}