#include <stdio.h>
int main (void)
{
	int i,k,j;
	for(i=0; i<4;i++)
	{
		for(k=4-i; k>0; k--)
		{
			printf(" ");
		}
		for(j=2*i+1; j>0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}