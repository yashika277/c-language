#include<stdio.h>
#include<string.h>
int main(){
	char name[50];
	int size,i,j;
	printf("Enter Name:");
	gets(name);
	
	size=strlen(name);
	
	for(i=0; i<size; i++){
		if(name[i]=='\0' ||name[i]==' '){
			for(j=i; j<size; j++){
				name[j]=name[j+1];
			}
			size--;
		}
	}
	printf("Name=%s",name);
	return 0;
}
