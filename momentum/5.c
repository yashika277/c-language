#include<stdio.h>
int main(){
	int unit,amt,sub,total;
	printf("Enter value:");
	scanf("%d",&unit);
	
	if(unit<=50){
		amt=unit*0.50;
	}
	else if(unit<=150){
		amt=(unit-50)*0.75+25;
	}
	else if(unit<=250){
		amt=(unit-150)*1.20+100;
	}
	else{
		amt=(unit-250)*1.50+220;
	}
	sub=amt*0.20;
	total=sub+amt;
	printf("Total : %d",total);
	return 0;
}
