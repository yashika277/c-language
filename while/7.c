#include<stdio.h>
int main(){
	int n=2000;
	while(n<=3000){
		if(n%4==0){
			printf("%d\t",n);
		}
		n++;
	}
	return 0;
	
}
