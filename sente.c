#include <stdio.h>
#incude<conio.h>



int main(void) 

{

	char s[50];

	int i,count=1;



	scanf("%s",s);

	for(i=0;s[i]!='\0';i++)

	{

		if(s[i]==' ')

		{

			count=count+1;

		}

	}

	printf("\n%d",count);

	return 0;
  }
