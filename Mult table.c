#include <stdio.h>
#include "STD_types.h"

int main (void)
{
	u32 x;
	printf("Enter number ");
	scanf("%d",&x);
	int i;
	for (i=1; i<=x; i++)
	{
		printf ("%d \n", x*i);
	}
	return 0;
}