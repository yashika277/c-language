#include<stdio.h>
int main(){
	int n;
	printf("Enter value:");
	scanf("%d",&n);
	int arr[n];
	int i,sum=0;
	for(i=0; i<n; i++){
		printf("Enter value of [%d]:",i);
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
		printf("The Average is %d",sum/n);
	return 0;
}
