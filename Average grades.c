#include <stdio.h>
int main (void)
{
int n;
float s[n];
printf("kindly enter number of students \n");
scanf("%d",&n);
printf("kindly enter grades \n");
for( int i=0;i<n;i++)
{
    scanf("%f",s[i]);
}
float p=0;
for(int i=0; i<n;i++)
{
    p=p+s[i];
}
float m=p/n;
printf("%f",m);
return 0;
}