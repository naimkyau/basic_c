#include <stdio.h>

//Function prototype
void morning();
void afternoon();
void night();

//Function definition
void morning(){
    printf("good morning\n");
}
void afternoon(){
    printf("good afternoon\n");
}
void night(){
    printf("good night\n");
}

int main() {
    morning();
    afternoon();
    night();
    return 0;
}