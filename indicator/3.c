#include <stdio.h>
void revArray(int *arr, int size) {
    int *a = arr;
    int *a1 = arr + size - 1;
    int temp;

    while (a < a1) {
        
        temp = *a;
        *a = *a1;
        *a1 = temp;
        a++;
        a1--;
    }
}

int main() {
    int i,size;
    printf("Enter the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    
    revArray(arr, size);

    printf("Reverse array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

