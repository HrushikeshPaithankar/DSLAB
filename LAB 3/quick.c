#include <stdio.h>

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5, 7}; 
    int n = 7;  
    int i, j, pivot, temp;
    int count = 0; 
    for (i = 0; i < n - 1; i++) {
        pivot = arr[n - 1];  
        j = i - 1;
        
        for (int k = i; k < n - 1; k++) {
            if (arr[k] <= pivot) {
                j++;
                temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
        }
        temp = arr[j + 1];
        arr[j + 1] = arr[n - 1];
        arr[n - 1] = temp;
        for (int x = 0; x < n; x++) {
            if (arr[x] == pivot) {
                count++;
            }
        }
    }
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n%d",count);

    return 0;
}