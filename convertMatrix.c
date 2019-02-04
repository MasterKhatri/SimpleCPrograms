#include <stdio.h>
void main()
{
	int a[4][4];
	printf("This simple program converts a 3*3 matrix into 4*4\n");
	printf("Enter a 3*3 matrix\n");
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			if(i!=3 && j!=3)
				scanf("%d", &a[i][j] );
			else
				a[i][j] = i * j;
		}
	}
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}
