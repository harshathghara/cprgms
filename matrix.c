#include <stdio.h>
int main()
{
	int A[20][20],B[20][20],C[20][20],p,q,m,n,i,j;
	printf("Enter the order of the matrix A(p*q)\n");
	scanf("%d%d",&p,&q);
	printf("Enter the order of the matrix B(m*n)\n");
	scanf("%d%d",&m,&n);
	if (q!=m)
	{
		printf("Matrix multiplication not possible");
		return 1;
	}
	printf("Enter matrix A");
	for (i=0;i<p;i++)
	{
		for (j=0;j<q;j++)
		{
		scanf("%d",&A[i][j]);
		}
	}
	printf("Matrix A :\n");
	for (i=0;i<p;i++)
	{
		for (j=0;j<q;j++)
		{
		printf("\t%d",&A[i][j])
		}
		printf("\n');
	}
	printf("Enter matrix B");
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
		scanf("%d",&B[i][j]);
		}
	}
	printf("Matrix B :\n");
	for (i=0;i<M;i++)
	{
		for (j=0;j<n;j++)
		{
		printf("\t%d",&B[i][j])
		}
		printf("\n');
	}
	
	
	
