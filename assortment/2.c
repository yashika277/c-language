#include<stdio.h>
int  main(){
	int n;
	printf("Enter array size:");
	scanf("%d",&n);
	int i,arr[n],max1=0,max2=0;
	for(i=0; i<n; i++){
		printf("Enter array value: ");
		scanf("%d", &arr[i]);
	}
	for(i=0; i<n; i++){
		if(arr[i]>max1){
			max2 = max1;
            max1 = arr[i];
		}
		else if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
	}
	printf("First largest = %d\n", max1);
    printf("Second largest = %d", max2);
	return 0;
}
