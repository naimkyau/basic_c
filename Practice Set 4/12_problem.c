#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d NOT a prime number\n", n);
    } else {
        int is_prime = 1; // Assume n is prime until proven otherwise
        i = 2;

        do {
            if (n % i == 0) {
                is_prime = 0; // n is not prime
                break;
            }
            i++;
        } while (i * i <= n);

        if (is_prime) {
            printf("%d IS a prime number\n", n);
        } else {
            printf("%d NOT a prime number\n", n);
        }
    }

    return 0;
}
