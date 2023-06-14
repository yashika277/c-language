#include<stdio.h>
int main(){
	char value;
	printf("Enter value:");
	scanf("%c",&value);
	
	if((value>='a' && value<='z')||(value>='A'&& value<='Z')){
		printf("Alphabet");
	}
	else if(value>='0'&& value<='9'){
		printf("digit");
	}
	else{
		printf("Special character");
	}
	return 0;
}
