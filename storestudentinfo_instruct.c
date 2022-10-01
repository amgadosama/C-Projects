#include <stdio.h>
#include "STD_types.h"
typedef struct
{
	u8 x[10];
	u32 id;
	u32 grade;
}info;
int main (void)
{
	info student;
	printf("enter name of student");
	scanf("%c",&student.x);
	printf("\n enter id of student");
	scanf("%d",&student.id);
	printf("\n Enter grade of student ");
	scanf("%d",&student.grade);
	printf("%c \t %d \t %d",student.x,student.id,student.grade);
	return 0;
}