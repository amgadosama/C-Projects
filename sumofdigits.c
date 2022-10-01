#include <stdio.h>
int main (void)
{
	int x,y,t,sum=0,remainder;
	printf("Enter Value \n");
	scanf("%d",&x);
	t=x;
	while(t!=0)
	{
		remainder= t % 10;
		sum+=remainder;
		t = t/10;
	}
	printf("sum of digits of %d = %d",x,sum);
	return 0;
}