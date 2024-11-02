#include <stdio.h>

int main() {
    int marks[6];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        printf("The adderss of marks is : \t%u\n", &marks[i]);
    }


    return 0;
}