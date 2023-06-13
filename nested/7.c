#include<stdio.h>
int main(){
	int a,b,c,d,e;
	printf("Enter value A:");
	scanf("%d",&a);
	printf("Enter value B:");
	scanf("%d",&b);
	printf("Enter value C:");
	scanf("%d",&c);
	printf("Enter value D:");
	scanf("%d",&d);
	printf("Enter value E:");
	scanf("%d",&e);
	
	a>b?
		a>c?
			a>d?
				a>e?
					printf("A is max")
				:
					printf("E is max")
			:
				d>e?
					printf("D is max")
				:
					printf("E is max")
		:
			c>d?
				c>e?
					printf("C is max")
				:
					printf("E is max")
			:
				d>e?
					printf("D is max")
				:
					printf("E is max")
	:
		b>c?
			b>d?
				b>e?	
					printf("B is max")
				:
					printf("E is max")
			:
				d>e?
					printf("D is max")
				:
					printf("E is max")
		:
			c>d?
				c>e?
					printf("C is max")
				:
					printf("E is max")
			:
				d>e?
					printf("D is max")
				:
					printf("E is max");
	return 0;
}
