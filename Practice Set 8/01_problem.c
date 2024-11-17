#include <stdio.h>

int main() {
    char str1[5];
    for (int i = 0; i < 4; i++)
    {
        scanf("%c",&str1[i]);
        fflush(stdin);
    }
    str1[4]='\0';

    printf("%s\n",str1);


    // char str2[20];
    // printf("Enter your name \t: ");
    // fgets(str2,20,stdin);
    // printf("Your name is \t: %s\n",str2);

    return 0;
}