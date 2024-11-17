#include <stdio.h>

int sum(int);

int sum(int x){
    int result = 0;
    for (int i = 0; i <= x; i++)
    {
        result += i;
    }
    return result;
}

int main() {
    int n=10;
    printf("%d\n",sum(n));
    return 0;
}