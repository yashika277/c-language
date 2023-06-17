#include<stdio.h>
int main(){
	int a=1;
	int sum=0;
	int n;
	printf("Enter value:");
	scanf("%d",&n);
	do{
		sum = sum+a;
		a++;	
	}while(a<=n);
	printf("sum:%d",sum);
	return 0;
}
