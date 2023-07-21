#include<stdio.h>
void swapValue(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int a,b;
	printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);
    
    printf("Before swapping:\n a = %d\n b = %d\n", a, b);
    swapValue(&a, &b);
	
	printf("After swapping:\n a = %d\n b = %d\n", a, b);

	return 0;
}
