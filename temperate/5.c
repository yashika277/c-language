#include<stdio.h>
int main(){
	int n,rever=0,r,temp;
	printf("Enter Value:");
	scanf("%d",&n);
	temp=n;
	while(n!=0){
		r=n%10;
		rever=rever*10+r;
		n/=10;	
	}
	printf("%d ",rever);
	if(rever==temp){
		
		printf("Palindrome");
	
	}
	else{
		printf("Not Palindrome");
	}
	
	return 0;
	
}
