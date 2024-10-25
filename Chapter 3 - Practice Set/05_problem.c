#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);
    printf("Enter number 3: ");
    scanf("%d", &c);
    printf("Enter number 4: ");
    scanf("%d", &d);

    // Assume the first number is the largest
    int largest = a;

    // Compare with the other numbers
    if (b > largest) {
        largest = b;
    }
    if (c > largest) {
        largest = c;
    }
    if (d > largest) {
        largest = d;
    }

    printf("%d is the largest number\n", largest);

    return 0;
}
