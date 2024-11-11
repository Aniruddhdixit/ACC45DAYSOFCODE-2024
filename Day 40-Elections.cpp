#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;
    
    while (T--) {
        int N, X;
        cin >> N >> X;
        
        vector<int> A(N), B(N);
        
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        
        for (int i = 0; i < N; ++i) {
            cin >> B[i];
        }
        
        // To track how many states A is winning and how many votes are needed to win
        vector<int> requiredVotes;
        int currentWins = 0;
        
        // For each state, check if A is already winning or needs extra votes
        for (int i = 0; i < N; ++i) {
            if (A[i] > B[i]) {
                currentWins++;  // A already wins this state
            } else {
                // Calculate the extra votes A needs to win this state
                int extraVotesNeeded = B[i] - A[i] + 1;
                requiredVotes.push_back(extraVotesNeeded);
            }
        }
        
        // Sort the required votes in ascending order to use Chef's votes efficiently
        sort(requiredVotes.begin(), requiredVotes.end());
        
        // Distribute Chef's votes to help A win more states
        for (int i = 0; i < requiredVotes.size(); ++i) {
            if (X >= requiredVotes[i]) {
                X -= requiredVotes[i];
                currentWins++;  // A wins this state with the extra votes
            } else {
                break;  // No more votes can be distributed to secure additional states
            }
        }
        
        // Check if A wins more than half of the states
        if (currentWins > N / 2) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}