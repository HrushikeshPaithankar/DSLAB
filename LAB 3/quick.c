#include <stdio.h>

int quicksort(int a[], int l, int h)
{
    int si = l, ei = h, temp;
    int pivot = a[si];
    while (si < ei)
    {
        while (a[si] <= pivot && si < h)
        {
            si++;
        }
        while (a[ei] > pivot && ei > l)
        {
            ei--;
        }
        if (si < ei)
        {
            temp = a[si];
            a[si] = a[ei];
            a[ei] = temp;
        }
    }
    temp = a[ei];
    a[ei] = pivot;
    a[si] = temp;

    return ei;
}
void quick(int a[], int l, int h)
{
    if (l < h)
    {
        int pos = quicksort(a, l, h);
        quick(a, l, pos - 1);
        quick(a, pos + 1, h);
    }
}
int main()
{
    int a[100], i, n, l, h;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    l = 0;
    h = n - 1;
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    quick(a, l, h);
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
