#include <stdio.h>

int main() {
    int a,b,c,n;
    
    scanf("%d", &n);
    while (n){
        scanf("%d %d %d ", &a,&b, &c);
        if((a==0 && b==0)||(a==0&&c==0)||(b==0&&c==0)){
            printf("Water filling time\n");
        }else{
            printf("Not now\n");
        }
    n--;
}
}