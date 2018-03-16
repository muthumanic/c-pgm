#include<stdio.h>
#inlclude<conio.h>
int main()
{
  int a,b,c,product,mod;
  printf("value of a,b,c");
  scanf("%d%d%d",&a,&b,&c);
  product=a*b;
  mod=product%c;
  printf("%d",mod);
  return 0;
}
