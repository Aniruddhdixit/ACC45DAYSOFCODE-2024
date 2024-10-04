[23:42, 10/4/2024] Aniruddh dixit🚩: #include <stdio.h>

int main() {
	// your code goes here
	    int T,X;
	    scanf("%d",&T);
	    while(T--){
	        scanf("%d",&X);
	    if(X<=7){
	        printf("YES\n");
	    }else{
	        printf("NO\n");
	    }
	}
	return 0;
}
[23:45, 10/4/2024] Aniruddh dixit🚩: #include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for(int i=0;i<n;i++){
            if(x>=arr[i]){
                x-=arr[i];
                cout<<"1";
                
        }
        else{
            cout<<"0";
        }
        }
        cout<<endl;

    }
    return 0;
}