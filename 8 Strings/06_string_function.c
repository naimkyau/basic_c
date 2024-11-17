#include <stdio.h>
#include <string.h>

int main()
{
/*This function is used to count the number of characters in the string excluding the null (‘\0’) characters.*/
    char st[] = "Naim";
    int length = strlen(st);
    printf("String length is %d\n", length);

/*This function is used to copy the content of second string into first string passed to it.*/
    char source[] = "Naim";
    char target[30]="Siam";
    printf("%s\t%s\n",target, source);
    strcpy(target, source);
    printf("%s\t%s\n",target, source);

 /*This function is used to concatenate (marge) two strings.*/
    char s1[] = "Naim";
    char s2[] = " Ahmed";
    strcat(s1, s2);
    printf("%s\t%s\n",s1, s2);

/*This function is used to compare two strings. It returns 0 if the strings are equal, anegative value if the first string's mismatching character's ASCII value is less than the second string's corresponding mismatching character, and a positive value otherwise.*/
    int a = strcmp("a", "b"); // Negative value
    int b = strcmp("b", "a"); // Positive value
    int c = strcmp("c", "c"); // 0
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);

    return 0;
}