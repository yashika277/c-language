#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int i=0,j,length=0;
	printf("Enter Any String :");
	gets(str);
	while(str[i]!='\0'){
		length++;
		i++;
	}
	i=0;
	j=length-1;
	while(i<length/2){
		if(str[i]==str[j]){
			i++;
			j--;
		}else{
			break;
		}	
	}
	if(i>=j){
		printf("\n palindrome");
	}else{
		printf("\n not a palindrome");
	}
	return 0;
}
