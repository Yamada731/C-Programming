#include <stdio.h>

int main() {
    int i, n;
    unsigned long long fact = 1; // Boro number hold koriboloi long long

    // User pora ekhon number loi ase
    printf("Enter a number: ");
    scanf("%d", &n);

    // 1 pora n logot guni guni factorial calculate kora hoise
    for(i = 1; i <= n; i++) {
        fact *= i;
    }

    // Result print kore
    printf("Factorial of %d is %llu\n", n, fact);
    return 0;
}
