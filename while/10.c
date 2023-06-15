#include<stdio.h>
int main(){
	int a;
	int b=1;
	int c;
	printf("Enter value:");
	scanf("%d",&a);
	while(b<=10){
		c=a*b;
		printf("%d*%d=%d\n",a,b,c);
		b++;
	}
	return 0;
	
}
