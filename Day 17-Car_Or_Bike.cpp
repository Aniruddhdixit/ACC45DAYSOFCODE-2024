#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int T; // Number of test cases
    cin >> T;

    while (T--) {
        int X, Y; // Time taken with bike and car
        cin >> X >> Y;

        // Compare the times
        if (X < Y) {
            cout << "Bike" << endl;
        } else if (X > Y) {
            cout << "Car" << endl;
        } else {
            cout << "Same" << endl;
        }
    }

}