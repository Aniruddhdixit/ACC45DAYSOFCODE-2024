#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int l[n],r[n];
    for(int i=0;i<n;i++)
    cin>>l[i];
    for(int i=0;i<n;i++)
    cin>>r[i];
    int index,rate,to_watch=0;
    for(int i=0;i<n;i++){
        if(l[i]*r[i]>to_watch){
            to_watch=l[i]*r[i];
            index=i+1;
            rate=r[i];
        }
        else if(l[i]*r[i]==to_watch&&r[i]>rate){
            to_watch=l[i]*r[i];
            index=i+1;
            rate=r[i];
        }
    }
    cout<<index<<endl;
}
}