#include <stdio.h>

int main() {
    int marks[6];
    // printf("Input mark 1 : ");
    // scanf("%d", &marks[6]);
    // printf("The mark 1 is : %d\n", marks[6]);

    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        printf("The value of marks is : \t%d\n", marks[i]);
    }


    return 0;
}