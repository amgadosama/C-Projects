#include <stdio.h> 
int passed ( int arr1[],int arr2[],int arr3[],int size1,int size2, int size3);
int failed( int arr1[],int arr2[],int arr3[],int size1,int size2, int size3);
int highest( int arr1[],int arr2[],int arr3[],int size1,int size2, int size3);
int min( int arr1[],int arr2[],int arr3[],int size1,int size2, int size3);
float avg( int arr1[],int arr2[],int arr3[],int size1,int size2, int size3);
int main(void)
{
	int a[10], b[10], c[10],i,pass=0,fail=0,highesttotal=0,minimum=0;
	float average=0;
	printf("Enter grades of class A \n");
		for(i=0; i<10; i++)
	{
		printf("Student Number %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter grades of class B \n");
	for(i=0; i<10; i++)
	{
		printf("Student Number %d:",i+1);
		scanf("%d",&b[i]);
	}
	printf("Enter grades of class C \n");
	for(i=0; i<10; i++)
	{
		printf("Student Number %d: ",i+1);
		scanf("%d",&c[i]);
	}
	pass=passed(a,b,c,10,10,10);
	printf("Number of passed students: %d\n",pass);
	fail=failed(a,b,c,10,10,10);
	printf("Number of failed students: %d\n",fail);
	highesttotal=highest(a,b,c,10,10,10);
	printf("Highest grade is: %d \n",highesttotal);
	minimum=min(a,b,c,10,10,10);
	printf("Minumum grade is: %d \n",minimum);
	average=avg(a,b,c,10,10,10);
	printf("average grade is: %.2f \n",average);
    
	return 0;
}
int passed (int arr1[],int arr2[],int arr3[],int size1,int size2, int size3)
{
	int passa=0;
	int passb=0;
	int passc=0;
	int passtotal=0;
	int i;
	for(i=0; i<10; i++)
	{
		if(arr1[i]>=50 && arr1[i]<=100)
		{
		  passa++;
		}
	}
	for(i=0; i<10; i++)
	{
		if(arr2[i]>=50 && arr2[i]<=100)
		{
		  passb++;
		}
	}
	for(i=0; i<10; i++)
	{
		if(arr3[i]>=50 && arr3[i]<=100)
		{
		  passc++;
		}
	}
	passtotal=passa+passb+passc;
	return passtotal;
}
int failed( int arr1[],int arr2[],int arr3[],int size1,int size2, int size3)
{
	int faila=0;
	int failb=0;
	int failc=0;
	int failtotal=0;
	int i;
	for(i=0; i<10; i++)
	{
		if(arr1[i]<50 && arr1>=0)
		{
		  faila++;
		}
	}
	for(i=0; i<10; i++)
	{
		if(arr2[i]<50 && arr2[i] <=100)
		{
		  failb++;
		}
	}
	for(i=0; i<10; i++)
	{
		if(arr3[i]<50 && arr3[i]<=100)
		{
		  failc++;
		}
	}
	failtotal=faila+failb+failc;
	return failtotal;
}
int highest( int arr1[],int arr2[],int arr3[],int size1,int size2, int size3)
{
	int i,j,n=10,temp=0,temp1=0,temp2=0,temp3=0;
	for(i=0; i<n; i++)

	{
		for(j=0; j<n-1; j++)
		{
			if(arr1[j]>arr1[j+1])
		    {
		 	    temp=arr1[j];
			    arr1[j]=arr1[j+1];
			    arr1[j+1]=temp;
			}	
		}
	}
	temp1=arr1[9];
	temp=0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-1; j++)
		{
			if(arr2[j]>arr2[j+1])
		    {
			    temp=arr1[j];
			    arr2[j]=arr2[j+1];
			    arr2[j+1]=temp;
			}
		}
	}
	temp2=arr2[9];
	temp=0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-1;j++)
		{
			if(arr3[j]>arr3[j+1])
		    {
			    temp=arr3[j];
			    arr3[j]=arr3[j+1];
			    arr3[j+1]=temp;
			}	
		}
	}
	temp3=arr3[9];
	temp=0;
	if(temp1>temp2 && temp1>temp3)
	{
		return temp1;
	}
	else if(temp2>temp3)
	{
		return temp2;
	}
	else
	{
		return temp3;
	}
	
}
int min( int arr1[],int arr2[],int arr3[],int size1,int size2, int size3)
{
	int i,j,n=10,temp=0,temp1=0,temp2=0,temp3=0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-1; j++)
		{
			if(arr1[j]>arr1[j+1])
		    {
			   temp=arr1[j];
			   arr1[j]=arr1[j+1];
			   arr1[j+1]=temp;
			}
		}
	}
	temp1=arr1[0];
	temp=0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-1; j++)
		{	
			if(arr2[j]>arr2[j+1])
		    {
			    temp=arr1[j];
			    arr2[j]=arr2[j+1];
			    arr2[j+1]=temp;
			}
		}
	}
	temp2=arr2[0];
	temp=0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-1;j++)
		{
			if(arr3[j]>arr3[j+1])
		    {
			    temp=arr3[j];
			    arr3[j]=arr3[j+1];
			    arr3[j+1]=temp;
			}
		}
	}
	temp3=arr3[0];
	temp=0;
	if(temp1<temp2 && temp1<temp3)
	{
		return temp1;
	}
	else if(temp2<temp3)
	{
		return temp2;
	}
	else
	{
		return temp3;
	}
	
}
float avg( int arr1[],int arr2[],int arr3[],int size1,int size2, int size3)
{
	int i=0,sum1=0, sum2=0, sum3=0, sumtotal=0, n=10;
	float averagetotal=0;
	for(i=0; i<n ; i++)
	{
		sum1+=arr1[i];
	}
	for(i=0; i<n ; i++)
	{
		sum2+=arr2[i];
	}
	for(i=0; i<n ; i++)
	{
		sum3+=arr3[i];
	}
	sumtotal=sum1+sum2+sum3;
	averagetotal=sumtotal/30.0;
	return averagetotal;

}