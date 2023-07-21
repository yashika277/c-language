#include <stdio.h>
int main(){
	char str[100];
	printf("Enter string:");
	scanf("%s",str);
	 int size=0;
	char *a=str;
	while(*a!='\0'){
		size++;
		a++;
	}
	printf("Length of string:%d\n",size);
	return 0;	
}
    

