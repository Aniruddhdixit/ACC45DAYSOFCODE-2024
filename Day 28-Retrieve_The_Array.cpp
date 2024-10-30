#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    long long b[n],sumb=0,a;
    for(int i=0;i<n;i++){
    cin>>b[i];
    sumb+=b[i];
    }
    a=sumb/(n+1);
    for(int i=0;i<n;i++)
    cout<<b[i]-a<<" ";
    cout<<endl;
}
}