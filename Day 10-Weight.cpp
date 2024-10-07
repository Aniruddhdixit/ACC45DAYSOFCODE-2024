#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
    cin >> T; 
    while (T--) {
        int W, X, Y, Z;
        cin >> W >> X >> Y >> Z; 
        if (W == X || W == Y || W == Z ||
            W == X + Y || W == X + Z || 
            W == Y + Z || W == X + Y + Z) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;

}