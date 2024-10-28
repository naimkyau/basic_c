#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int n, z=1;
    
    srand(time(NULL));
    int random_number = rand() % 100 + 1;

    for (int  i = 0; z=1 ; i++){
        printf("Enter a random number between 1 and 100\n\t");
        scanf("%d",&n);

        if (n>1 && n<100){
            for (int i = 0; z=1 ; i++) {
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
                    printf("Your Points : %d",100-(i*8));
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