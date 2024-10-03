#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
	    int n, x;
	    cin >> n >> x;
	    
	    vector<int> arr(n);
	    
	    for(int j = 0; j < n; j++){
	        cin >> arr[j];
	    }
	    
	    int max_people = x;
	    int people_at_time = x;
	    
	    for(int j = 0; j < n; j++){
	        people_at_time += arr[j];
	        max_people = max(max_people, people_at_time);
	    }
	    cout << max_people << endl;
	}
}