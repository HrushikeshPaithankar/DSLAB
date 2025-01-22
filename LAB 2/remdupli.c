#include <stdio.h>
void main()
{
    int i, j, a[100], n, k = 0, b[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i]=-1;
    }
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (a[i] == a[j])
            {
               b[j]=0;
            }
        }
    }
       for(i=0;i<n;i++)
    {
        if(b[i]!=0)
        {
            printf("%d ",a[i]);
        }
    }
}