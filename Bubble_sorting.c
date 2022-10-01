#include <stdio.h>
void bubble(int* p, int size);
int main (void)
{
	int x[10], i=0;
	for(i=0; i<10; i++)
	{
		printf("Enter Value %d: ",i+1);
		scanf("%d",&x[i]);
	}
	bubble(x,10);
	for (i=0; i<10; i++)
	{
		printf("%d \n",x[i]);
	}
	
	return 0;
}
void bubble(int* p, int size)
{
	int i,j,temp=0;
	for(i=0; i<size; i++)
	{
		for(j=0; j<size-1;j++)
		{
			if(p[j]>p[j+1])
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
}