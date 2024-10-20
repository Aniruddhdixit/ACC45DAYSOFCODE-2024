#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, A, B;
        cin >> N >> A >> B;
        
        // Calculate the number of rounds
        int k = log2(N);
        
        // Total time for the rounds and the breaks
        int total_time = (k * A) + ((k - 1) * B);
        
        cout << total_time << endl;
    }
    return 0;
}
    