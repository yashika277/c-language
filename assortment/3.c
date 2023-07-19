#include <stdio.h>

main() {
	
    int arr[100], freq[100];
    int n, i, j, count;

    printf("Enter size of array: ");  
    scanf("%d", &n);  

   
    for(i=0; i<n; i++)
    {
    	printf("Enter Array value: "); 
        scanf("%d", &arr[i]);

        freq[i] = -1;  
    }


    for(i=0; i<n; i++)
    {
        count = 1;
        for(j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j]) 
            {
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    printf("\nAll elements of array rotation : \n");
    for(i=0; i<n; i++)
    {
        if(freq[i] != 0)
        {
          	printf("%d is %d times\n", arr[i], freq[i]);
        }
    }

}
