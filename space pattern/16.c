#include<stdio.h>
int main(){
	char i,j,k;
	for(i='A'; i<='E'; i++){
		for(k=i; k>='A'; k--){
			printf("  ");
		}
		for(j=i; j<='E'; j++){
			printf("%c ",j);
		}
		printf("\n");
	}
}
