#include <stdio.h>

int main(void) {
	int t,n,i,j;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&n);
	    int c=0,k=0;
	    char s[n+1];
	    scanf("%s",s);
	    for(j=0;j<n;j++){
	        if(s[j]=='I'){
	            c=1;
	            break;}
	            if(s[j]=='N'){
	                k++;}}
	                if(c==1){
	                    printf("INDIAN\n");
	                }
	                else if(k==n){
	                    printf("NOT SURE\n");}
	                    else{
	                        printf("NOT INDIAN\n");
	                    }
	}
	                    return 0;
}