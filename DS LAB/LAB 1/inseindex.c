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
     for(i=n;i>=t;i--)
    {
        a[i+1]=a[i];
    }
    scanf("%d",&a[t]);
        for(i=0;i<n+1;i++)
    {
        printf("%d ",a[i]);
    }
}