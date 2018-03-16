#include <stdio.h>
#include<conio.h>

int main(void) {
	int i,n,a[56];
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d\n",&a[i]);
	}for(i=1;i<=n;i++)
		if(a[i]!=i)
		{
			printf("%d\n",i);
		}
	
	return 0;
}
