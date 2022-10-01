#include <stdio.h>
int main (void)
{
	int n=0,m=0,x[100][100],y[100][100],sum[100][100];
	printf("Enter rows of matrix");
	scanf("%d",&n);
	printf("Enter coloums of matrix");
	scanf("%d",&m);
	int i,j;
	printf("Enter elements of first matrix: ");
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	printf("Enter elements of second matrix: ");	
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			scanf("%d",&y[i][j]);
		}
	}
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			sum[i][j]=x[i][j]+y[i][j];
			printf("%d \t",sum[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}