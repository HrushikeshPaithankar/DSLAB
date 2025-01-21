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
 for(i=n;i>=0;i--)
    {
        a[i+t]=a[i];
    }
    for(i=0;i<t;i++)
    {
        a[i]=0;
    }
       for(i=0;i<n+1;i++)
    {
        printf("%d ",a[i]);
    }
}