#include<stdio.h>
int main(){
	char a;
	printf("Enter value:");
	scanf("%c",&a);
	
	switch(a){
		case 'S':
			printf("Sunday");
			break;
		case 'm':
			printf("Monday");
			break;
		case 'T':
			printf("Tuesday");
			break;
		case 'W':
			printf("Wednesday");
			break;
		case 't':
			printf("Thursday");
			break;
		case 'F':
			printf("Friday");
			break;
		case 's':
			printf("Saturday");
			break;
		default:
			printf("Invalid! Input");
		
	}
	return 0;
	
}
