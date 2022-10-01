#include <stdio.h>
#include "STD_types.h"
u32 main (void)
{
	u32 x,y;
	printf("1- add \n");
	printf("2- subb \n");
	printf("3- mull \n");
	printf("4- div \n");
	printf("5- And \n");
	printf("6- Or \n");
	printf("7- Not \n");
	printf("8- Xor \n");
	printf("9- reminder \n");
	printf("10- increment \n");
	printf("11- descrement \n");
	printf("enter operation ID: ");
	scanf("%d",&x);
	printf("Enter number of operands: ")
	scanf("%d",&y);
	if(1==x && 2==y)
		add();
	else if(2==x && 2==y)
		sub();
	else if (3==x && 2==y)
		mul();
}
void add (void)
{
	u32 x,y;
	printf("")
}