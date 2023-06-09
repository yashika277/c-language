#include<stdio.h>
int main(){
	int a;
	printf("Enter value :");
	scanf("%d",&a);
	if(a>0){
		printf("positive");
	}else if(a<0){
		printf("negative");
	}else{
		printf("nutural");
	}
}
