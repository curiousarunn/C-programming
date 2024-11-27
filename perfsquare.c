#include <stdio.h>

int main() {
    int N, i;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    printf("The series of perfect squares up to %d are:\n", N);
    for (i = 1; i * i <= N; i++) {
        printf("%d ", i * i);
    }
    return 0;
}