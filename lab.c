#include <stdio.h>
#inlcude<conio.h>
int main()
{
    char s1[100], s2[100], i, j;

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    // analysis the length of string s1
    // and store it in i
    for(i = 0; s1[i] != '\0'; ++i);

    for(j = 0; s2[j] != '\0'; ++j, ++i)
    {
        s1[i] = s2[j];
    }

    s1[i] = '\0'

    return 0;
}
