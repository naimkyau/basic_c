#include <stdio.h>

void my_strlen(char x[]){
    int count=0;
    for (int i = 0; x[i] != '\0' ; i++)
    {
        count++;
    }
    printf("%d\n",count);
}

int main() {
    char str[] = "Naim Ahmed Siam";
    printf("%s\n",str);
    my_strlen(str);
    return 0;
}