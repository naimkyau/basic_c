#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int n, try=0;
    
    srand(time(NULL));
    int random_number = rand() % 100 + 1;

    while (1){
        printf("Guess a random number between 1 and 100\n\t");
        scanf("\t%d",&n);

        if (n>=1 && n<=100){
            while (1) {
                try++;
                if (n>random_number){
                    printf("Lower number please\n\t");
                    scanf("%d",&n);
                }
                else if (n<random_number){
                    printf("Higher number please\n\t");
                    scanf("%d",&n);
                }
                else{
                    printf("correct number\n\n");
                    printf("Your Points : %d",100-(try*6));
                    printf("\n");
                    break;
                }
            }
            break;
        }
        else{
            printf("!!! invalid number !!!\n");
        }
    }
    return 0;
}