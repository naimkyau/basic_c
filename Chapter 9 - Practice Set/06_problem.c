#include <stdio.h>

struct c
{
    int real;
    int imaginary;
};

void display(struct c x)
{
    printf("The value of Complex number is %d + %di \n", x.real, x.imaginary);
}
int main()
{
    struct c carr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter real part \n");
        scanf("%d", &carr[i].real);
        printf("Enter imaginary part \n");
        scanf("%d", &carr[i].imaginary);
        display(carr[i]);
    }
    return 0;
}