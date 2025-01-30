#include <stdio.h>

void merge(char arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    char L[n1], R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        R[i] = arr[mid + 1 + i];
    int i = 0; 
    int j = 0; 
    int k = left; 

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(char arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}
int main() {
    char arr[] = {'b', 'd', 'a', 'f', 'e', 'c'};
    int left = 0;
    int right = 5; 
    mergeSort(arr, left, right);
    printf("Sorted array: ");
    for (int i = 0; i <= right; i++) {
        printf("%c ", arr[i]);
    }

    return 0;
}