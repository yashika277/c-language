#include<stdio.h>
int main(){
	int i=1,n,fact=1;
	printf("Enter value:");
	scanf("%d",&n);
	while(i<=n){
		fact = fact*i;
		printf("%d\n",fact);
		i++;
	}
	return 0;
}
