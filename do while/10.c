#include<stdio.h>
int main(){
	int a,b=1,c;
	printf("Enter value:");
	scanf("%d",&a);
	do{
		c=a*b;
		printf("%d x %d = %d\n",a,b,c);
		b++;
	}while(b<=10);
}
