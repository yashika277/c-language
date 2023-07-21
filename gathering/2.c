#include<stdio.h>
int sumArray(int x[50],int n){
	int i,sum=0;
	for(i=0; i<n; i++){
		sum+=x[i];
	}
	return sum;
}
int main(){
	int a[50],n,i;
	printf("Enter Array Size : ");
	scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("Enter Value : ");
		scanf("%d",&a[i]);
	}
	printf("sum=%d",sumArray(a,n));
	return 0;
}
