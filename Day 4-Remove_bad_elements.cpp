#include <iostream>
#include <map>
using namespace std;

void solution() {
    int n;
    cin >> n;
    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        int nums;
        cin >> nums;
        freq[nums]++;
    }
    int maxf = 0;
    for (auto entry : freq) {
        maxf = max(maxf, entry.second);
    }
    cout << n - maxf << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}