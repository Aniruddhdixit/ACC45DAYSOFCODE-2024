#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	        int n,x,y,count=0;

        cin>>n>>x>>y;

        
        for(int i=0;i<=n;i++)
        {
            if(x*i==y)
            {
                count++;
                std::cout << "yes" <<std::endl;
            }
        }
        if(count==0)
        std::cout << "no" << std::endl;
	}
	return 0;
}