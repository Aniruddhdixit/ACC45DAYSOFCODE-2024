#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        int count1 = 1;
        int result = 0;
        for (int i = 0; i < n; i++) {


            if (a[i] == a[i + 1]) {
                count1++;
            } else {
                count1 = 1;
            }

            result = max(result, count1);
        }
        cout << n - result << endl;


    }

}