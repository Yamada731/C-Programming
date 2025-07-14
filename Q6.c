#include <stdio.h>

int main() {
    int n;

    // User pora ekhon number loi ase
    printf("Enter a number: ");
    scanf("%d", &n);

    // Even or odd check kori ase
    if (n % 2 == 0)
        printf("%d is Even\n", n);
    else
        printf("%d is Odd\n", n);

    return 0;
}
