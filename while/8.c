#include<stdio.h>
int main(){
	int a=1;
	int n;
	int sum=0;
	printf("Enter value:");
	scanf("%d",&n);
	while(a<=n){
		sum += a;
		a++;
	}
	printf("Sum : %d",sum);
	return 0;
}
