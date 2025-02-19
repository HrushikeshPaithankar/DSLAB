#include <stdio.h>

void merge(int a[], int l, int mid, int h)
{
    int i = l, j = mid + 1, k = l;
    int b[h + 1];
    while (i <= mid && j <= h)
    {
        if (a[i] <= a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
        k++;
    }

    while (i <= mid)
    {
        b[k] = a[i];
        i++;
        k++;
    }

    while (j <= h)
    {
        b[k] = a[j];
        j++;
        k++;
    }

    for (i = l; i <= h; i++)
    {
        a[i] = b[i];
    }
}
void mergesort(int a[], int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;
        mergesort(a, l, mid);
        mergesort(a, mid + 1, h);
        merge(a, l, mid, h);
    }
}
void main()
{
    int a[100], i, n, l, h;
    printf("Enter size of array: ");
    scanf("%d", &n);
    l = 0;
    h = n - 1;
    printf("Enter elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    mergesort(a, l, h);
    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
