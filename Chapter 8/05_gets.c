#include <stdio.h>

int main() {
    char str1[20];
    printf("Input gets \t: ");
    gets(str1);
    printf("gets value is \t: %s\n",str1);


    char str2[20];
    printf("Input fgets \t: ");
    fgets(str2,20,stdin);
    printf("fgets value is \t: %s\n",str2);
    return 0;
}