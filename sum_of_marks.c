#include<stdio.h>
int main()
{
	int roll_no;
	char name[50];
	int marks[5],i,total=0;
	printf("Enter roll number: ");
	scanf("%d",&roll_no);
	printf("Enter name: ");
	scanf("%s",&name);
	for(i=0;i<5;i++)
	{
		printf("Enter marks for subject %d: ",i+1);
		scanf("%d",&marks[5]);
		total += marks[5];
	}
	printf("Total marks: %d",total);
}

