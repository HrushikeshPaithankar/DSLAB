#include<stdio.h>
void main()
{
    int n,i,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    // display
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}