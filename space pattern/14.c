#include<stdio.h>
int main(){
	char i,j,k;
	for(i='A'; i<='E'; i++){
		for(k=i; k<='E'; k++){
			printf("  ");
		}
		for(j='A'; j<=i; j++){
			printf("%c ",j);
		}
		printf("\n");
	}
	return 0;
}
