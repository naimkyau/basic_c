#include <stdio.h>

int main() {
    int marks[5];

    marks[1] = 45;
    marks[2] = 52;

    printf("%d\n",marks[1]);
    printf("%p\n", &marks[1]);
    printf("\n");
    printf("%d\n",marks[2]);
    printf("%p\n", &marks[2]);
    return 0;
}