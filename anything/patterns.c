#include <stdio.h>

void snowflake(int N) {
    if (N < 1 || N % 2 == 0)
        printf("Invalid size!\n");
    else {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i == N/2) { // draw horizontal line on center
                    printf("* ");
                } else if (j == N/2) { // draw vertical line on center
                    printf("* ");
                } else if (i == j) { // draw diagonal line \ _
                    printf("* ");
                } else if (j == (N - 1) - i) { // draw diagonal line /
                    printf("* ");
                } else {// print space
                    printf("  ");
                }
            }

            printf("\n");
        }
    }
}