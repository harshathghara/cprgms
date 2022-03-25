#include<stdio.h>
int main()
{
	int n,i,avg;
	struct student
	{
		int rollno,english,math,science,socialscience,lang1,lang2;
		char name[20];
		float avg;
	};
	struct student s[20];
	printf("Enter the number of students:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the student %d details:\n",i+1);
		printf("Enter the roll number\n");
		scanf("%d",&s[i].rollno);
		printf("Enter student name:\n");
		scanf("%s",s[i].name);
		printf("Enter marks of english,math,science,socialscience,lang1,lang2\n");
		
		scanf("%d",&s[i].english);
		scanf("%d",&s[i].math);
		scanf("%d",&s[i].science);
		scanf("%d",&s[i].socialscience);
		scanf("%d",&s[i].lang1);
		scanf("%d",&s[i].lang2);
	}
	for(i=0;i<n;i++)
		{
			s[i].avg=(s[i].english+s[i].math+s[i].science+s[i].socialscience+s[i].lang1+s[i].lang2)/6;
		}
	printf("Enter the average marks:\n");
	scanf("%d",&avg);
	for(i=0;i<n;i++)
		{
			if(s[i].avg>avg)
			{
				printf("student score above average\n");
				printf("%s\n",s[i].name);
			}
			else
			{
				printf("student score below average\n");
				printf("%s\n",s[i].name);
			}
		}
	return 0;
}
