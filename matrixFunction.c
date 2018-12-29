#include <stdio.h>
void matrixTranspose(int a[][10], int r, int c);
void main()  
{
	int x, y, i, j;
	printf("Enter rows and columns of matrix\n");
	scanf("%d %d", &x, &y);
	int b[x][y];
	printf("Enter elements of matrix\n");
	for(i=0; i<x; i++)
		for(j=0; j<y; j++)
			scanf("%d", &b[i][j]);
	matrixTranspose(b, x, y);
}

void matrixTranspose(int a[][10], int r, int c) {
	int mat[10][10]= {0,0}, i, j;
	for(i=0; i<r; i++)
		for(j=0; j<c; j++)
			mat[i][j] = a[j][i];
	for(i=0; i<r; i++) {
		for(j=0; j<c; j++) {
			printf("%d\n", mat[i][j]);
		}
	}
}


