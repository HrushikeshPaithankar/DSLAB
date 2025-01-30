#include <stdio.h>

int main() {
    int n, i, j, key,min,temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];  
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < n; i=i+2) {
        key = arr[i];  
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];  
            j = j - 1;
        }
        arr[j + 1] = key;  
    }
        for (i = 1; i < n - 1; i=i+2) {
        min = i;
        for (j = i + 1; j < n; j=j+2) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min != i) {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}