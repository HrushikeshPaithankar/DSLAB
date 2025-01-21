#include<stdio.h>
void main()
{
    int n,i,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
      for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
       for(i=0;i<n-1;i++)
    {
        printf("%d",a[i]);
    }
}