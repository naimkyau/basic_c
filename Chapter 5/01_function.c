#include <stdio.h>

int sum(int x, int y){
    printf("The sum is %d\n", x+y);
    return x+y;
}

int main(){
    int a1 = 2;
    int b1 = 3;

    sum(a1,b1); 

    int a2 = 4;
    int b2 = 5;

    sum(a2,b2);

    int a3 = 7;
    int b3 = 8;

    sum(a3, b3);

    return 0;
}