#include<stdio.h>
int main(){
	int i=1,n,sum=0;
	printf("Enter value:");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		sum = sum+i;
	}
	printf("sum : %d",sum);
	return 0;
}
