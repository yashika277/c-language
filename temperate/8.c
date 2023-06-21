#include<stdio.h>
int main(){
	int n,i=2,count=0;
	printf("Enter number:");
	scanf("%d",&n);
	
	while(i<=n/2){
		if(n%2==0){
			count=1;
		}
		i++;
	}
	if(count==0){
		printf("prime number");
	}
	else{
		printf("not a prime number");
	}
	
}
