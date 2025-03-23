//array numbers comparision; 
#include <stdio.h>

int main() {
    int n; 
    
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n]; 
    

    int i;
    for(i = 0; i < n; i++) {
        printf("Element array[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    
    printf("Array elements are: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}