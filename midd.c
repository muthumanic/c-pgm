#include <stdio.h>
#include<conio.h>


int main()
{
  char n[100];
  int i,j=0;
  	scanf("%[^\n]s",n);
	for(i=0;n[i]!='\0';i++)
		j++;
  if(j%2==0)
  {
  	j=j/2;
  for(i=0;n[i]!='\0';i++)
  {
  if(i==j)
  printf("*");
  else
  printf("%c",n[i]);
  }
  }
  else
  {j=j/2;
  
  	if(i==j)
  	printf("*");
  	else
  	printf("%c",n[i]);
  }
  }
}
