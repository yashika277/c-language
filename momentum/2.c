#include<stdio.h>
int main(){
	int a;
	printf("Enter value:");
	scanf("%d",&a);
	(a%2==0)?
		printf("even")
	:
		printf("Odd");
	
	return 0;
}
