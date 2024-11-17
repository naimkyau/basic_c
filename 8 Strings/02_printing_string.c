#include <stdio.h>

int main()
{
    char name1[] = {'N', 'A', 'I', 'M', '\0'};
    char name2[] = "NAIM";

    for (int i = 0; i < 4; i++){
        printf("%c", name1[i]);
    }
    printf("\n");
    
    printf("%s\n", name1);

    return 0;
}