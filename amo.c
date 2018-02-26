#include <stdio.h>
#inlcude<conio.h>
  int main() 
  {
    int a1[10];
    int i;
    int greatest;
    for (i = 0; i < 10; i++) 
    {
    	scanf("%d", &a1[i]);
    }
    greatest = a1[0];
    for (i = 0; i < 10; i++) 
    {
	if (a1[i] > greatest) 
	{
	greatest = a1[i];
    }
    }
    printf("%d", greatest);
    return 0;
  }
