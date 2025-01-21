#include<stdio.h>
void main()
{
    int n,i,t,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        scanf("%d",&t);
for(i=0;i<t;i++)
    {
        a[n-1+t]=a[i];
    }
    for(i=0;i<n;i++)
    {
        a[i]=a[i+t];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}