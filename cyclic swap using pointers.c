#include <stdio.h>
#include "STD_types.h"
void swap(u32*, u32*, u32*);
int main (void)
{
	u32 a,b,c;
	printf("Enter three numbers : ");
	scanf("%d %d %d",&a,&b,&c);
	swap(&a,&b,&c);
	printf("a= %d \t b= %d , c= %d ",a,b,c);
	return 0;
}
void swap (u32* x, u32* y, u32* z)
{
	u32 temp;
	temp=*x;
	*x=*y;
	*y=*z;
	*z=temp;
}