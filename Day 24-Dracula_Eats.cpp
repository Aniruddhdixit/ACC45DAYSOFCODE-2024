#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int ans=0;
        int i=2;
        while(i<=n){
            ans++;
            i=i+7;
        }
        cout<<ans<<endl;
    }
}