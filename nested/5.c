#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter value A:");
	scanf("%d",&a);
	printf("Enter value B:");
	scanf("%d",&b);
	printf("Enter value C:");
	scanf("%d",&c);
	
	a>b?
		a>c?
			printf("A is max")
		:
			printf("C is max")
	:
		b>c?
			printf("B is max")
		:
			printf("C is max");
	
	return 0;
}
