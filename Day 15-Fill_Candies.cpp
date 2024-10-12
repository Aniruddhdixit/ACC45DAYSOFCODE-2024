#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, K, M; 
        scanf("%d %d %d", &N, &K, &M);

       
        int maxCandiesPerBag = K * M;

        int bagsNeeded;
        if (N % maxCandiesPerBag == 0) {
            bagsNeeded = N / maxCandiesPerBag;
        } else {
            bagsNeeded = N / maxCandiesPerBag + 1;
        }

        printf("%d\n", bagsNeeded);
    }

    return 0;
}