#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str[50];
    int n,i;
    scanf("%s",str);
    scanf("%d",&n);
    int l=strlen(str);
    for(i=0;i<n;i++)
    {
   printf("%c",str[i]);
    }
    return 0;
         
}
