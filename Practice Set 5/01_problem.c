#include <stdio.h>

//Function prototype
float average(float, float, float);

//function definition
float average(float x, float y, float z){
    float result = (x+y+z)/3;
    return result;
}

int main() {
    float a=7;
    float b=6;
    float c=4;
    float d = average(a, b, c);
    printf("%.2f\n", d);
    return 0;
}