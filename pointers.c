#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	float *p,mean=0,var=0,sd=0,sum=0,a[20];
	printf("Enter the value of n\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	p=a;
	for(i=0;i<n;i++)
	{
		scanf("%f",p);
		p++;
	}
	printf("Array elements are\n");
	p=a;
	for(i=0;i<n;i++)
	{
		printf("%f\n",*p);
		p++;
	}
	p=a;
	for(i=0;i<n;i++)
	{
		sum = sum + *p;
		p++;
	}
	mean=sum/n;
	printf("\nMean=%f\n",mean);
	p=a;
	for(i=0;i<n;i++)
	{
		var=var+pow((*p-mean),2);
		p++;
	}
	var=var/n;
	printf("Varience=%f\n",var);
	sd=sqrt(var);
	printf("Standard deviation=%f",sd);
	return 0;
}
	
