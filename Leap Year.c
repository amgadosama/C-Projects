#include <stdio.h>
int main (void)
{
	int x;
	printf("Enter a year: ");
	scanf("%d",&x);
	if(x%400==0 || x%4==0)
	{
		printf("Leap Year \n");
	}
	else
	{
		printf("Not a  Leap year \n");
	}
	return 0;
}