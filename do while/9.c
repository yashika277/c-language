#include<stdio.h>
int main(){
	int a=1;
	int fact=1;
	int n;
	printf("Enter value:");
	scanf("%d",&n);
	
	do{
		fact= fact*a;
		a++;
	}while(a<=n);
	printf("%d",fact);
	return 0;
	
}
