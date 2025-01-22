#include <stdio.h>
void main()
{
    int i, j, a[100], n, k = 0, b[100],c[100],temp,m=0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i]=-1;
    }
    for (i = 0; i < n; i++)
    {
        k = 1;
        for (j = i+1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                k++;
               b[j]=0;
            }
        }
    if(b[i]!=0)
    {b[i]=k;
    c[i]=a[i];
    }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[i]<b[j])
            {
                temp=b[j];
                b[j]=b[i];
                b[i]=temp;
                temp=c[j];
                c[j]=c[i];
                c[i]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=b[i];j>0;j--)
        {
            a[m]=c[i];
            m++;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}