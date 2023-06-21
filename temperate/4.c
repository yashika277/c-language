#include<stdio.h>
int main(){
	int n,fd,ld,sum;
	printf("Enter value:");
	scanf("%d",&n);
	ld=n%10;
	while(n>=9){
		n=n/10;
		fd=n;
	}
	printf("sum:%d",fd+ld);
	return 0;
}
