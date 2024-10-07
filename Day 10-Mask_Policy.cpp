#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int n; int inf;
	while(t--){
	    cin>>n>>inf;
	    int uninf = n - inf;
	    if(inf <= uninf){
	        cout<<inf<<endl;
	    }
	    else cout<<uninf<<endl;
	}
	return 0;
}