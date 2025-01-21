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
    for(i=t;i<n;i++)
    {
        a[i]=a[i+1];
    }
     for(i=0;i<n-1;i++)
    {
        printf("%d ",a[i]);
    }
}