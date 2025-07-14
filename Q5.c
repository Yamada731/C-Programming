#include <stdio.h>

int main() {
    int a, b; // Duita variable declare kora hoise

    // User pora value loi ase
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Compare kori boro number print kore
    if (a > b)
        printf("Largest number is: %d\n", a);
    else
        printf("Largest number is: %d\n", b);

    return 0;
}
