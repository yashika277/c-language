#include<stdio.h>
int main(){
	int n=2000;
	do{
		if(n%4==0){
			printf("%d\t",n);
		}
		n++;
	}while(n<=3000);
	return 0;
}
