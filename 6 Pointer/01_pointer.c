#include <stdio.h>



    //     *i output the value   of i
    //     &i output the adderss of i
    // int a = 5;
    // printf("The adderss is %d\n", &a);       // The adderss is 6422300
    // printf("The value is %d\n", *(&a));      // The value is 5


int main() {
    int i = 72;
    int* j = &i;    // j is a pointer, pointing to i.
    int k = 24;

    printf("%p\n", j);      // address of i
    printf("%p\n", &j);     // adderss of j

    printf("The address of i is  \t%u\n", &i);
    printf("The address of i is  \t%u\n", j);
    printf("The address of k is  \t%u\n", &k);

   return 0;
}