#include <stdio.h>
int main (void)
{
	int x,i,j,c=1,n;
	printf("Enter Number of rows \n");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
		printf("%d ", c);
		c++;
		}
		printf("\n");
	}
	return 0;
}