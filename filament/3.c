#include<stdio.h>
#include<string.h>
int main(){
	char name[50][20];
	int n=3,i;
	for(i=0;i<n;i++){
		printf("Enter string value:");
		gets(name[i]);
	}
	for(i=0;i<n;i++){
		printf("Name%d =%s\n",strlen(name[i]),name[i]);
	}
	return 0;
}
