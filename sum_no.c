#include <stdio.h>

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

   
    int sum = (n * (n + 1)) / 2;

    printf("The sum (using formula) is: %d\n", sum);

    return 0;
}
