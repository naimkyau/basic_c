#include <stdio.h>

struct c
{
    int real;
    int imaginary;
};

int main()
{

    struct c num;
    printf("Enter real part \n");
    scanf("%d", &num.real);
    printf("Enter imaginary part \n");
    scanf("%d", &num.imaginary);

    printf("%d + %di \n", num.real, num.imaginary);
    return 0;
}