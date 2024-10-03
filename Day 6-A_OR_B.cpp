#include <bits/stdc++.h>
using namespace std;

void attempts(int t1,int t2){
    int a=500-(t1*2)+1000-((t2+t1)*4) ;
    int b=1000-(t2*4)+500-((t1+t2)*2);
    
   cout<<max(a,b)<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int t1;
        int t2;
        cin>>t1;
        cin>>t2;
        attempts(t1,t2);
        
    }
    return 0;
    

}