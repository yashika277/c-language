#include<stdio.h>
int main(){
	int r,c,i,j;
	printf("Convert into transpose matrix:\n");
	printf("Enter number of row matrix:");
	scanf("%d",&r);
	printf("Enter number of column matrix:");
	scanf("%d",&c);
	int matrix[r][c];
	printf("Enter the elements of the matrix:\n");
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	int transpose[c][r];
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			transpose[i][j]=matrix[j][i];
		}
	}
	printf("Original matrix:\n");
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("%d",matrix[i][j]);
		}
		printf("\n");
	}
	printf("transpose matrix:\n");
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("%d",transpose[i][j]);
		}
		printf("\n");
	}
	return 0;
}
