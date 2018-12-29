#include <stdio.h>
void main()
{
	int r1, c1, r2, c2, i, j, k;
	do{
		printf("Enter rows and columns of first matrix\n");
		scanf("%d %d", &r1, &c1);
		printf("Enter rows and columns of second matrix\n");
		scanf("%d %d", &r2, &c2);
	} while(c1!=r2);
	int firstMatrix[r1][c1], secondMatrix[r2][c2], thirdMatrix[10][10]={0};
	printf("Enter elements of first matrix\n");
	for(i=0; i<r1; i++)
		for(j=0; j<c1; j++)
			scanf("%d", &firstMatrix[i][j]);
	printf("Enter elements of second matrix\n");
	for(i=0; i<r2; i++)
		for(j=0; j<c2; j++)
			scanf("%d", &secondMatrix[i][j]);
	for(i=0; i<r1; i++)
		for(j=0; j<c2; j++)
			for(k=0; k<c1; k++)
				thirdMatrix[i][j]+=firstMatrix[i][k]*secondMatrix[k][j];
	for(i=0; i<r1; i++){
		for(j=0; j<c2; j++)
			printf("\t%d", thirdMatrix[i][j]);
		printf("\n");
	}
}

