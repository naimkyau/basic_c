#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("naim.txt", "w");
    float num = 4.0;
    fprintf(ptr,"My JSC GPA is : %.2f ",num);
    fclose (ptr);
    return 0;
}