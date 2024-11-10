#include <bits/stdc++.h>
#define USING_NAMESPACE using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
USING_NAMESPACE
int main() 
{
    FAST_IO
    int t;cin>>t;for(int i=0;i<t;i++){
      int a,b;cin>>a>>b;
      int maxi=INT_MIN;
      vector<int>son(a);
      int count=0;
      for(int j=0;j<a;j++){
        cin>>son[j];
        maxi=max(maxi,son[j]);
        if(son[j]%b!=0)count+=((son[j]/b)+1);
        else count+=(son[j]/b);}
        cout<<min(maxi,count)<<endl;}
      return 0;}