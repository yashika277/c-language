#include<stdio.h>
int main(){
	int r,c,i,j;
	printf("Sum of Diagonal:\n");
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
	int sum=0;
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			if(i==j){
				sum+=matrix[i][j];
			}
		}
	}
	printf("Sum of diagonal elements:%d\n",sum);
	return 0;
}
