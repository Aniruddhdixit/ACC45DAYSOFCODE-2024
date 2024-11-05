#include<iostream>
using namespace std;
int main() {
    int n;
    int div = 2;
    cout<<"enter the number: ";
    cin>>n;
    while (div<n)
    {
        if(n%div==0)
        {
            printf("it is not a prime number");
            break;
        }
        else {
            div = div+1;
        }
        printf("entered number is prime number");
        break;
    }
    return 0;
}