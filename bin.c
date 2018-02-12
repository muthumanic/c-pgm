#include <stdio.h>
#include<conio.h>

int main()
{
   char str[1000], ch;
   int i, frequency = 0;

   printf("Enter a string: ");
   gets(str);

   printf("Enter a char to find the frequency: ");
   scanf("%c",&ch);

   for(i = 0; str[i] != '\0'; ++i)
   {
       if(ch == str[i])
           ++frequency;
   }

   printf("Frequency of  = %d", ch, frequency);

   return 0;
}
