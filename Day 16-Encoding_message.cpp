#include <iostream>
#include <string>
using namespace std;

void encode_message(int T, pair<int, string> test_cases[]) {
    for (int t = 0; t < T; ++t) {
        int N = test_cases[t].first;
        string S = test_cases[t].second;
        
        for (int i = 0; i < N - 1; i += 2) {
            swap(S[i], S[i + 1]);
        }
        
        for (int i = 0; i < N; ++i) {
            S[i] = 'z' - (S[i] - 'a');
        }
        
        cout << S << endl;
    }
}

int main() {
    int T;
    cin >> T;
    
    pair<int, string> test_cases[T];
    
    for (int i = 0; i < T; ++i) {
        int N;
        string S;
        cin >> N >> S;
        test_cases[i] = {N, S};
    }
    
    encode_message(T, test_cases);
    
    return 0;
}