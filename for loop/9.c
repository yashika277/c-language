#include<stdio.h>
int main(){
	int i=1,n,fact=1;
	printf("Enter value:");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		fact= fact*i;
		
	}
	printf("%d",fact);
	return 0;
	
}
