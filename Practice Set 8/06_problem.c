#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "L#olnh#wr#sod|#ylghr#jdph";
    for (int i = 0; i < strlen(str); i++)
    {
       str[i] = str[i] - 3;
    }

    printf("%s", str);
    
    return 0;
}