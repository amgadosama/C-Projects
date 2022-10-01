#include <stdio.h>
#include "STD_types.h"
int main (void)
{
	u32 x[10], temp=0, i;
	for(i=0; i<10; i++)
	{
		printf("\n Enter value of %d: ",i+1);
		scanf("%d",&x[i]);
	}
	for(i=0; i<10; i++)
	{
		if(x[i]>x[i+1])
		{
			temp=x[i];
			x[i]=x[i+1];
			x[i+1]=temp;
		}
	}
	printf("Largest number is %d",x[9]);
	return 0;
}
