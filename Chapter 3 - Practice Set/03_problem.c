#include <stdio.h>

int main() {
    int year;
    printf("Inter Year : ");
    scanf("%d", &year);

     
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("This Is Leap Year");
            }
        else{
            printf("This Is Not a Leap Year");
        }
        }
        else{
            printf("This Is Leap Year");
        }
    }
    else {
        printf("This Is Not a Leap Year");
    }
    return 0;
}