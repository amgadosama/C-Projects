#include <stdio.h>

int main (void)
{
	float x;
	int y;
	float z,sum = 0;
	printf("Please enter your rent\n");
	scanf("%f",&x);
	printf("Please enter years \n");
	scanf("%d",&y);
	printf("Please enter interest \n");
	scanf("%f",&z);
	for (int i= 0; i<y;i++)
	{
		x+=x*z;
		x=sum+x;
		
	}
	printf("your rent after %d years= %.2f EGP \n",y,x);
	return 0 ;
}
