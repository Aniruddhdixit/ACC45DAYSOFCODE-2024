#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r; //number of rounds
    cin >> r;
    int winner = 0;
    int a = 0, b = 0;//Cumulative scores
    int lead = 0; //max lead after every round
    while(r--)
    {
        int p1, p2; //scores of player in that particular round
        cin >> p1 >> p2;
        a += p1; //total score of p1
        b += p2; //total score of p2
        int z = abs(a - b); //lead after every round
        if(z > lead) //if current lead is greater than maximum lead then the winner will be changed
        {
            lead = z; //max lead changed
            a > b ? winner = 1 : winner = 2; //winner updated
        }
    }
    cout << winner << " " << lead << endl; //output displayed
}