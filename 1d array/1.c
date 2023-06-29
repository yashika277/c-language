#include<stdio.h>
int main(){
	int n;
	printf("Enter size:");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0; i<n; i++){
		printf("Enter value[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
