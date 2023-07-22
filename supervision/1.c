#include<stdio.h>
int main(){
	FILE *f;
	char name[10];
	f=fopen("C:\\c lang\\supervision\\demo.txt","w");
	if(f==NULL){
		printf("Error");
	}
	else{
		printf("Enter text:");
		gets(name);
		fputs(name,f);
		fclose(f);
	}
	return 0;
}
