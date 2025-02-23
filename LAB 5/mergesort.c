#include <stdio.h>

int main() {
    int arr[100]; 
    int n ,u;
    printf("size of array");  
    scanf("%d",&n);
    for(u=0;u<n;u++)
    {
        scanf("%d",&arr[u]);
    }
    int temp[n];  
    int i, j, k, l, h, mid, size;
    for (size = 1; size < n; size = size * 2) {
        for (l = 0; l < n - 1; l += 2 * size) {
            h = l + size;
            if (h >= n) {
                h = n;  
            }
            mid = h;
            if (h + size <= n) {
                h = h + size;
            } else {
                h = n;  
            }
            i = l;  
            j = mid;   
            k = l;  
            while (i < mid && j < h) {
                if (arr[i] <= arr[j]) {
                    temp[k++] = arr[i++];
                } else {
                    temp[k++] = arr[j++];
                }
            }
            while (i < mid) {
                temp[k++] = arr[i++];
            }
            while (j < h) {
                temp[k++] = arr[j++];
            }
            for (i = l; i < h; i++) {
                arr[i] = temp[i];
            }
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}