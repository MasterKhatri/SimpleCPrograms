#include <stdio.h>
void main()
{
	int i, n, j, r, c;
	printf("This simple program prints major and minor diagonals of a matrix\n");
	printf("Enter number of rows and columns\n");
	scanf("%d %d", &r, &c);
	int a[r][c];
	printf("Enter array elements\n");
	for(i = 0; i<r; i++){
		for(j = 0; j<c; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(i = 0; i<r; i++){
		for(j = 0; j<c; j++){
			if(i == j)
				printf("%d ", a[i][j]);
		}
	}
	printf("\n");
	for(int i = 0; i<r; i++)
	{
		for(int j = 0; j<c; j++)
			 if(j == i-1 && i != 0)
				printf("%d ", a[i][j]);
	}
	printf("\n");
	for(int i = 0; i<r; i++)
	{
		for(int j = 0; j<c; j++)
			 if(j == i+1 && i != n-1)
				printf("%d ", a[i][j]);
	}
	
}
	





