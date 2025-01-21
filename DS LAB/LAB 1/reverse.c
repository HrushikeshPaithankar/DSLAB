#include<stdio.h>
void main()
{
    int n,i,k,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        k=a[i];
        a[i]=a[n-i-1];
        a[n-1-i]=k;
    }
       for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}