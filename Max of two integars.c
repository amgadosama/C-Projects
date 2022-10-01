#include <stdio.h>
#include "STD_types.h"
u32 get_max(u32,u32,u32,u32);
u32 get_min(u32,u32,u32,u32);
u32 main (void)
{
	u32 x1,x2,x3,x4,max,min;
	printf("Enter first number:");
	scanf("%d",&x1);
	printf("Enter second number:");
	scanf("%d",&x2);
	printf("Enter third number:");
	scanf("%d",&x3);
	printf("Enter fourth number:");
	scanf("%d",&x4);
	max=get_max(x1,x2,x3,x4);
	min=get_min(x1,x2,x3,x4);
	printf("Max number : %d\n",max);
	printf("min mnumber : %d \n", min);
	return 0;
}
u32 get_max(u32 x,u32 y,u32 z,u32 t)
{
	if(x>y && x>z && x>t)
		return x;
	else if (y>z && y>t)
		return y;
	else if (z>t)
		return z;
	else 
		return t;
}
u32 get_min(u32 x,u32 y,u32 z,u32 t)
{
	if(x<y && x<z && x<t)
		return x;
	else if (y<z && y<t)
		return y;
	else if (z<t)
		return z;
	else 
		return t;
}