#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ; 
        int a[n][n]; 
        for(int i = 0 ; i < n ;i++){
            for(int j = 0 ; j < n ;j++){
                cin >> a[i][j]; 
            }
        }
	for(int i = 1; i< n ;i++){
		for(int j = 1 ; j < n ;j++){
			a[i][j] += a[i-1][j-1]; 	
		}	
	}
	int ans = 0 ; 
	for(int i = 0 ;i < n ;i++){
		ans = max({a[n-1][i],a[i][n-1],ans}) ;
	}	
	cout << ans << endl ;
    }
}