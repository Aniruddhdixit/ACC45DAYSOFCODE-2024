#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // your code goes here
    int t,n,x,y;
    for(cin>>t;t--;)
        cin>>n>>x>>y,
        cout<<(n-1)*4-abs(x-y)-abs(n+1-(x+y))<<endl;
    return 0;
}