#include <stdio.h>

//Function prototype
float mass(float);
//function definition
float mass(float x){
    float result = x*9.8;
    return result;
}

int main()
{
    float m;
    printf("Input the mass of body : ");
    scanf("%f",&m);
    printf("The value of force is : %.2f\n", mass(m));
    return 0;
}