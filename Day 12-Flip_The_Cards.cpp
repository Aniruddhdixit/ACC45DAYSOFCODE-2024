#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);
        int flips = (X < (N - X)) ? X : (N - X);
        printf("%d\n", flips);
    }
    return 0;
}