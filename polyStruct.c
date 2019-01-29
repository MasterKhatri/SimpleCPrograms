#include <stdio.h>
struct PT {
	int p;
	float c;
};
int main()
{
	int i;
	struct PT A[5];
	for(i=0; i<5; i++)
		scanf("%f %d", &A[i].c, &A[i].p);
	for(i=0; i<5; i++)
		printf("%fX^%d+", A[i].c, A[i].p);
}
