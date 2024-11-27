#include <stdio.h>

int main() {
    int a, b;
    long long result = 1; // Using long long to handle larger results

    // Input from user
    printf("Enter base (a): ");
    scanf("%d", &a);
    printf("Enter exponent (b): ");
    scanf("%d", &b);

    // Calculate a^b
    for (int i = 0; i < b; i++) {
        result *= a; // Multiply result by a, b times
    }

    // Output the result
    printf("%d raised to the power of %d is: %lld\n", a, b, result);

    return 0;
}
