#include<stdio.h>
main(){
	float p,r,n,ans;
	printf("Enter principal amount:");
	scanf("%f",&p);
	printf("Enter rate of interest:");
	scanf("%f",&r);
	printf("Enter time:");
	scanf("%f",&n);
	ans=(p*r*n)/100;
	printf("Interest is :%2f",ans);	
}
