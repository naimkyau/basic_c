#include <stdio.h>

typedef struct date
{
    int dd;
    int mm;
    int yyyy;
} Date;

void compair(struct date d1, struct date d2){
    printf("\n");
    if (d1.yyyy > d2.yyyy)
    {
        printf("2nd boy is Senior\n");
    }
    else if (d1.mm > d2.mm)
    {
        printf("2nd boy is Senior\n");
    }
    else if (d1.dd > d2.dd)
    {
        printf("2nd boy is Senior\n");
    }
    else if (d1.mm == d2.mm && d1.dd == d2.dd && d1.yyyy == d2.yyyy)
    {
        printf("1st son and 2nd son are same age.\n");
    }
    else{
        printf("1st boy is Senior\n");
    }
    
}

int main() {
    struct date d1;
    struct date d2;

    printf("Enter DD\t: ",d1.dd);
    scanf("%d", &d1.dd);
    printf("Enter MM\t: ",d1.mm);
    scanf("%d", &d1.mm);
    printf("Enter yyyy\t: ",d1.yyyy);
    scanf("%d", &d1.yyyy);
    printf("1st boy\t\t%d-%d-%d\n",d1.dd, d1.mm, d1.yyyy);

    printf("Enter DD\t: ",d2.dd);
    scanf("%d", &d2.dd);
    printf("Enter MM\t: ",d2.mm);
    scanf("%d", &d2.mm);
    printf("Enter yyyy\t: ",d2.yyyy);
    scanf("%d", &d2.yyyy);
    printf("2nd boy\t\t%d-%d-%d\n",d2.dd, d2.mm, d2.yyyy);

    compair(d1, d2);

    return 0;
}