#include <stdio.h>
#include "STD_types.h"
void swap( u32* x, u32* y);
int main (void)
{
	u32 arr[10];
	u32 size=sizeof(arr)/sizeof(arr[0]);
	u16 i;
	for(i=0; i<size;i++)
	{
		printf("Enter value %d: ", i+1);
		scanf("%d",&arr[i]);
	}
	u16 j;
	for (i=0; i<size; i++)
	{
		u16 min_index=i;
		for(j=i+1; j<size;j++)
		{
			if(arr[min_index]>arr[j])
			{
			min_index=j;
			}
		}
		swap(&arr[i],&arr[min_index]);	
	}
	for(i=0; i<size; i++)
	{
		printf("value of element %d: %d \n",i+1,arr[i]);
	}
	printf("Enter value to search");
	u32 arr2[10], search;
	j=0;
	scanf("%d",&search);
	for(i=0; i<size; i++)
	{
		if(search==arr[i])
		{
			arr2[j]=i;
			j++;
		}
	}
	if(j>0)
	{
		printf("Value exists %d times \n",j);
		for(i=0; i<j; i++)
		{
			printf("value exists in elemens %d \t", arr2[i]);
		}
	}
		
	return 0;
}
void swap( u32* x, u32* y)
{
	u32 temp;
	temp=*x;
	*x=*y;
	*y=temp;
}