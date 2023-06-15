#include<stdio.h>
int main(){
	int a=1;
	int n;
	int fact=1;
	printf("Enter value:");
	scanf("%d",&n);
	while(a<=n){
		fact=fact*a;
		printf("%d is factorial %d\n",a,fact);
		a++;
	}
	return 0;
}
