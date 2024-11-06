#include <stdio.h>
#include <string.h>

int main(){
    char c = 'm';
    int contains = 0;
    char str[] = "Naim";
    
    for (int i = 0; i < strlen(str); i++)
    {
       if(str[i] == c){
        contains = 1;
        break; 
       }
    }
    if(contains){
        printf("Yes !!!\n");
    }
    else{
        printf("No !!! \n");
        
    }
    
    return 0;
}