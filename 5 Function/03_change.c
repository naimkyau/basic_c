#include <stdio.h>

// //Function prototype
// int sum(int, int);

// //function definition
// int sum(int x, int y){
//     int result = x+y;
//     // printf("The sum is : %d\n", result);
//     return result;
// }

//Function prototype
int change(int);
int change(int a){
    a = 4;
    return a;
}

int main() {
    int a = 5;
    int b = 2;
    change(b);
    printf("b is : %d\n",b);
    printf("a is : %d\n",a);
    

    return 0;
}