#include <stdio.h>

//Function prototype
float c_to_f(float);
//function definition
float c_to_f(float c){
    float result = (c * (9.0/5.0)) + 32.0;
    return result;
}

int main() {
    float c = 39.7;
    float d = c_to_f(c);
    printf("In Fahrenheit : %f\n", d);
    return 0;
}