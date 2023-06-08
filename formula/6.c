#include<stdio.h>
int main(){
	int x=5;
	int y=6;
	int z=3;
	int a;
	
	a=(x*x*x) - (y*y*y) - (z*z*z) - (3*(x+y))+(3*(y+z)+3*(z+x));

	printf("%d",a);
	return 0;
	
}
