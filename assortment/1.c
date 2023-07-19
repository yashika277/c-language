#include<stdio.h>
int main(){
	int n;
	printf("Enter array size : ");
	scanf("%d",&n);
	int arr[n],i;
	for(i=0; i<n; i++){
		printf("Enter array value: ");
		scanf("%d", &arr[i]);
	}
	for(i=0; i<n; i++){
		if(arr[i] < 0){
			printf("\nAll negative elements: ");
			printf("%d",arr[i]);
		}
		else{
			printf("\nNumber is Positive");
		}
	}
	return 0;
}
