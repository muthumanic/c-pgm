#include <stdio.h>
#include<conio.h>
 
int main()
{
   int n, sum = 0, c, value;
 
   printf("Enter the num of integers you want to add\n");
   scanf("%d", &n);
 
   printf("Enter %d int\n",n);
 
   for (c = 1; c <= n; c++)
   {
      scanf("%d", &value);
      sum = sum + value;
   }
 
   printf("Sum of entered integers = %d\n",sum);
 
   return 0;
}
