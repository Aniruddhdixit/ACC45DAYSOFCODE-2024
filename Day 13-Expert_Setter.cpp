#include <stdio.h>

int main() {
	// your code goes here
    int t,i,x,y;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&x,&y);
        int k=x;
        int f= x/2;
        if(f<y) printf("YES\n");
        else if(f==y && k%2==0) printf("YES\n");
        else if(f==y && k%2!=0) printf("NO\n");
        else printf("NO\n");
    }
    return 0;
}