#include <stdio.h>
#include "STD_types.h"
int main (void)
{
	u32 x,z=1;
	u16 y;
	printf("Enter a number ");
	scanf("%d",&x);
	printf("Enter a power");
	scanf("%d",&y);
	while(y!=0)
	{
		z*=x;
		y--;
	}
	printf("%d",z);
	return 0;
}