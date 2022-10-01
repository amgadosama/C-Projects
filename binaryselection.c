#include <stdio.h>
#include "STD_types.h"
void swap (u16* x, u16* y);
int main (void)
{
	u16 arr[10];
	u16 size=sizeof(arr)/sizeof(arr[0]);
	u8 i;
	for (i=0; i<size; i++)
	{
		printf("Enter Element of %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	u8 j,min_index;
	for(i=0; i<size; i++)
	{
		min_index=i;
		for(j=i+1;j<size;j++)
		{
			if(arr[min_index]>arr[j]);
			{
				min_index=j;
			}
		}
		swap(&arr[i],&arr[min_index]);
	}
	for(i=0; i<size; i++)
	{
		printf("Element of %d: %d \n",i+1,arr[i]);
	}
	u16 search;
	printf("Enter value to search \n");
	scanf("%d",&search);
	u16 top=size-1;
	u16 bottom=0;
	u16 middle=(top+bottom)/2;
	while(top>=bottom)
	{
		if(search==arr[middle])
		{
			printf("value founded in element %d",arr[middle]);
		}
		else if(search>arr[middle])
		{
			bottom=middle-1;
		}
		else 
		{
			top=middle+1;
		}
		middle=(top+bottom)/2;
	}
	if(bottom>top)
	{
		printf("value not existed");
	}
	
	return 0;
}
void swap (u16* x, u16* y)
{
	u16 temp =*x;
	*x=*y;
	*y=temp;
}