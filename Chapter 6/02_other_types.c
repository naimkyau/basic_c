#include <stdio.h>

int main() {
    char i = 'A';
    char* j = &i;    // j is a pointer, pointing to i.

    printf("The address of i is  \t%u\n", &i);
    printf("The address of i is  \t%u\n", j);

printf("\n");

    float k = 3.1416;
    float* l = &k;
    printf("The address of k is  \t%u\n", &k);
    printf("The address of k is  \t%u\n", l);

   return 0;
}