#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n][m],flag=0,x;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	}
	for(int i=0;i<n;i++)
	{
		int m=a[i][0],M=a[i][0];
		for(int j=0;j<m;j++)
		{
			if(m>a[i][j])
				m=a[i][j];
		}
		for(int k=0;k<m;k++)
		{
			if(M<a[k][i])
				M=a[k][i];
		}
		if(m==M)
		{
			flag=1;
			x=m;
			break;
		}
	}
	if(flag)
	{
		printf("Good:");
	}
	else
		printf("asfh");
}
