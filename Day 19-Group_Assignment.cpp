#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int T;  
    cin >> T;

    while (T--) {
        int N;  
        cin >> N;

        unordered_map<int, int> freq;  

        
        for (int i = 0; i < N; ++i) {
            int Pi;
            cin >> Pi;
            freq[Pi]++;
        }

        bool possible = true;

        
        for (auto& entry : freq) {
            int groupSize = entry.first;
            int count = entry.second;

            if (count % groupSize != 0) {
                possible = false;
                break;
            }
        }
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}