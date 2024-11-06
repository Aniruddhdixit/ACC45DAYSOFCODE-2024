#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t,n, num, ind;
    for(cin>>t;t--;){
        cin>>n;
        int A[11] = {}, mx = 0, flag = 0;
        for(int i=0;i<n;++i){
            cin >> num;
            if(mx < ++A[num])
                mx = A[num], ind = num, flag = 1;
            else if(mx == A[num])
                flag ++;
        }
        cout << (flag == 1 ? to_string(ind) : "CONFUSED") << endl;
    }
    return 0;
}