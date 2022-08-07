#include<stdio.h>
int main()
{
	int i,j,n=3,m=19;
	printf("\n\n\t");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if( ( (n-1-i<=j) && (n*2+i>=j) ) || ( (n*4-i<=j) && (n*5+1+i>=j) ) )
			{
				printf("* ");
			}else
			{
				printf("  ");
			}
		}
		printf("\n\t");
	}
	n=n*3+1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i==0&&j==n/2+1)
			{
				printf("M y S i r G ");
			}
			if(i==0 && j>=n/2+1 && j<=n+1)
				continue;
			if(j>=i&&j<=m-1-i)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n\t");
	}

 return 0;
}

