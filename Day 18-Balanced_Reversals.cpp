#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N; 
        string A;
        cin >> A; 
        
        int count0 = 0, count1 = 0;
        
        
        for (char c : A) {
            if (c == '0') count0++;
            else count1++;
        }
        string result(count0, '0'); 
        result += string(count1, '1'); 
        
        cout << result << endl;
    }
    
    return 0;
}