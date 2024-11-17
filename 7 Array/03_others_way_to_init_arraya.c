#include <stdio.h>

int main() {

    float gpa[] = {4.00, 4.72, 4.92};
    for (int i = 0; i < 3; i++) {
        printf("The value of gpa is : \t%.2f\n", gpa[i]);
    }
    return 0;
}