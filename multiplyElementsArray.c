#include <stdio.h>
void main()
{
	int i, n, multiply=1;
	printf("Enter size of array\n");
	scanf("%d", &n);
	int a[n];
	printf("Enter elements of array\n");
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	for(i=0; i<n; i+=2)
		//if(i%2==0)
			multiply = multiply*a[i];
			printf("%d", multiply);
}
