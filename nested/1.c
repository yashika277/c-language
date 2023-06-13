#include<stdio.h>
int main(){
	int a,b;
	printf("Enter value A:");
	scanf("%d",&a);
	printf("Enter value B:");
	scanf("%d",&b);
	
	a>b?
		printf("A is max")
	:
		printf("B is max");
	return 0;
}
