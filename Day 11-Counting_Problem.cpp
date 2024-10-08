#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int T, N, count;
    cin >> T;
    
    for(int i=0;i<T;i++) {
        
        count = 0;            
        
        cin >> N;
        int arr[N];
        
        for(int j = 0 ; j < N ; j++) {       
            cin >> arr[j];
        }
        
        for(int j = 0; j < N; j++) {       
            if(arr[j] % 2 != 0)              
                count++;
        }
        
        if(count % 2 != 0 || count == 0)          
            cout<< "NO"<<endl;
        else
            cout << "YES"<<endl;
    }
    
    return 0;
}