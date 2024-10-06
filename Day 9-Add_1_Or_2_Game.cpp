#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        if(n == 1){
            cout<<"ALICE"<<endl;
            continue;
        }
        else if(n ==  2){
            cout<<"BOB"<<endl;
            continue;
        }
        else cout<<"BOB"<<endl;
    }

    return 0;
}