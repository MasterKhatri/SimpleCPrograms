#include <stdio.h>
int revDigit(int n,int ans) {
	if (n==0) 
	{
		printf("%d\n",ans);
		return 0;
	}
	ans=ans*10+n%10;
	revDigit(n/10,ans);
//	printf("%d   ",ans);
}
main()
{
	int a;
	printf("Enter the number to be reversed\n");
	scanf("%d", &a);
	int ans=0;
	revDigit(a,ans);
//	printf("%d", rev);
}
