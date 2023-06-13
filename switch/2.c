#include<stdio.h>
int main(){
	char a;
	printf("Enter value:");
	scanf("%c",&a);
	
	switch(a){
		case 'J':
			printf("January");
			break;
		case 'f':
			printf("February");
			break;
		case 'M':
			printf("March");
			break;
		case 'a':
			printf("April");
			break;
		case 'm':
			printf("May");
			break;
		case 'j':
			printf("June");
			break;
		case 'U':
			printf("July");
			break;
		case 'u':
			printf("August");
			break;
		case 's':
			printf("September");
			break;
		case 'o':
			printf("October");
			break;
		case 'n':
			printf("November");
			break;
		case 'd':
			printf("December");
			break;
		default:
			printf("Invalid! Input");
	}
	return 0;
}
