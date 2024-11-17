#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Check if n is less than or equal to 1
    if (n <= 1) {
        printf("%d NOT a prime number\n", n);
    } else {
        int is_prime = 1; // Assume n is prime until proven otherwise
        
        for (i = 2; i * i <= n; i++) { // Check up to the square root of n
            if (n % i == 0) {
                is_prime = 0; // n is not prime
                break;
            }
        }
        
        if (is_prime) {
            printf("%d IS a prime number\n", n);
        } else {
            printf("%d NOT a prime number\n", n);
        }
    }

    return 0;
}
