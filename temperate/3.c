#include<stdio.h>
int main(){
	int n,count=0;
	printf("Enter value:");
	scanf("%d",&n);
	while(n!=0){
		n=n/10;
		count++;
		
	}
	printf("count : %d",count);
	return 0;
}
