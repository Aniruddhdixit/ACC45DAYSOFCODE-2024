#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int R1, R2, R3, R4;
        // Input the 4 decisions of the referees
        scanf("%d %d %d %d", &R1, &R2, &R3, &R4);
        
        // If all referees give 0, output "IN", otherwise output "OUT"
        if (R1 == 0 && R2 == 0 && R3 == 0 && R4 == 0) {
            printf("IN\n");
        } else {
            printf("OUT\n");
        }
    }
    
    return 0;
}