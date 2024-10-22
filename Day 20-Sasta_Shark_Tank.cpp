#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  

    while (T--) {
        int N, X;
        cin >> N >> X;  
        double value1 = (N / 10) * 100;
        double value2 = (X / 20) * 100;
        
        if(value1 == value2){
            cout<<"ANY\n";
        }else if(value1 > value2){
            cout<<"FIRST\n";
        }else{
            cout<<"SECOND\n";
        }
      
    }

    return 0;
}