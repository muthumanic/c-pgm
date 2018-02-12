#include <stdio.h>
#include<conio.h>
 
int main()
{
    char    str[100];
    int countDigits,countAlphabet,countSpecialChar,countSpaces;
    int counter;
 
    //assign all counters to zero
    countDigits=countAlpha=countSpecialChar=countSpaces=0;
 
    printf("Enter a string: ");
    gets(str);
 
    for(counter=0;str[counter]!=NULL;counter++)
    {
 
        if(str[counter]>='0' && str[counter]<='9')
            countDigits++;
        else if((str[counter]> && str[counter]<='Z')||(str[counter]>='a' && str[counter]<='z'))
            countAlphabet++;
        else if(str[counter]==' ')
            countSpaces++;
            }
            getch();
