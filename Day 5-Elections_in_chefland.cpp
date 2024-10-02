#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int XA, XB, XC;
        cin >> XA >> XB >> XC;
        
        if (XA > 50) {
            cout << "A" << endl;
        } else if (XB > 50) {
            cout << "B" << endl;
        } else if (XC > 50) {
            cout << "C" << endl;
        } else {
            cout << "NOTA" << endl;
        }
    }
    return 0;
}