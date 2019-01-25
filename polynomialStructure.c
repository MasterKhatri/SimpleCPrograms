#include <stdio.h>
struct PT {
	int p;
	float c;
};
int main()
{
	int i;
	struct PT A[5]= {1, 2, 3, 4, 5};
	for(i=0; i<4; i++)
		printf("%dX^%d+", A[i].c, A[i].p);
}
