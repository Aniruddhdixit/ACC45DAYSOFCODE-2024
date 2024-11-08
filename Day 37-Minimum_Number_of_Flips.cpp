#include<iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t>0){
	    t--;
	    int n;
	    cin >> n;
	    int A[n];
	    int c1 = 0;
	    int c2 = 0;
	    for (int i=0; i<n; i++){
	        cin >> A[i];
	            if(A[i]==1){
	                c1++;
	            }
	            else{
	                c2++;
	            }
	    }
	    
	    int ans = abs((c1-c2)/2);
	    if(n%2!=0){
	        cout << -1 << endl;
	    }
	    else{
	        cout << ans << endl;
	    }
	}
	    
	return 0;
}