#include<stdio.h>
void main()
{
    int n,i,x,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
      for(i=n;i>=0;i--)
    {
        a[i+1]=a[i];
    }
    scanf("%d",&x);
    a[0]=x;
        for(i=0;i<n+1;i++)
    {
        printf("%d ",a[i]);
    }
}