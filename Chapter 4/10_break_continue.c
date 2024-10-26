#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++){
        if (i==2){
            break;      // exit the loop now !!!
        }
        printf("break : %d\n",i);
    }
    printf("\n\n\n");
        for (int i = 0; i < 5; i++){
        if (i==2){
            continue;   // skip the iteration now !!!
        }
        printf("continue : %d\n",i);
    }



    return 0;
}