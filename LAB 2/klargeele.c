#include <stdio.h>

void main()
{
    int n, a[100], i, j, max, x = 1, k, t, temp;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    while (x <= k)  
    {
        max = a[0]; 
        t = 0;
        for (i = 1; i < n; i++)
        {
            if (a[i] > max)
            {
                max = a[i];
                t = i;
            }
        }
        if (x == k)
        {
            printf("%d", max);
            return; 
        }
        for (i = t; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        n--; 
        x++; 
    }
}