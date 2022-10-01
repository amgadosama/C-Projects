#include <stdio.h>
#include "STD_types.h"
int main (void)
{
	u32 x[10],sum=0;
	f32 avg=0;
	printf("Enter values of array \n");
	u32 i;
	for(i=0; i<10; i++)
	{
		printf("Value number: %d ", i+1);
		scanf("%d",&x[i]);
	}
	for(i=0; i<10; i++)
	{
		sum+=x[i];
	}
	avg=sum/10.0;
	printf("Avergae = %f ", avg);
	return 0;
}