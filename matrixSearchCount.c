#include<stdio.h>
int main()
{
	int n,m;
	printf(" Enter teh order of matrix");
	scanf("%d%d",&n,%m);
	int a[n][m];
	printf(" Enter the Matrix:\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;i<m;j++)
			scanf("%d",&a[i][j]);
	}
	int val;
	printf(" Enter the element to be searched: ");
	scanf("%d",&val);
	int c=0;
	for(int =0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==val)
				c++;
		}

	}
	if(c==0)
		printf(" Element not found\n");
	else
		printf(" Element found %d times",c);
}
