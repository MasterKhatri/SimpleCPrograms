#include <stdio.h>
struct PT {
	int p;
	float c;
};
void main()
{
	int n, i;
	printf("This simple program prints polynomial terms upto users' desire3\n");
	printf("Enter upto what term you want to print\n");
	scanf("%d", &n);
	struct PT A[n];
	printf("Enter terms- coefficient followed by power\n");
	for(i=0; i<n; i++)
		scanf("%f %d", &A[i].c, &A[i].p);
	for(i=0; i<n; i++)
		printf("%fX^%d+", A[i].c, A[i].p);
}
