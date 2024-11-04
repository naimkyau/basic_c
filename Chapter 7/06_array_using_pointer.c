#include <stdio.h>

int main() {
    int marks[] = {68, 62, 34, 46};
    int *ptr = &marks[0];

    for (int i = 0; i < 4; i++) {
        printf("The marks at index %d is %d\n", i, marks[i]);
                        // both are same 
        printf("The marks at index %d is %d\n", i, *ptr);
        ptr++;
    }
    return 0;
}