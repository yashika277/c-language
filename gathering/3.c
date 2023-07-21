#include<stdio.h>
int size(char str[]){
	int len=0;
	while(str[len]!='\0')
	len++;
	return len;
}
int main(){
	char n[100];
	int length;
	printf("Enter the string:");
	gets(n);
	length=size(n);
	printf("\nlength of the string is:%d",length);
}
