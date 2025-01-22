#include<stdio.h>
void main()
{
    int n,i,j,a[100],u=0,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   for(i=1;i<n;i++)
    {j=i-1;
     temp=a[i];
     while(j>=0 && temp<a[j])
     {
        a[j+1]=a[j];
        j--;
        u++;
     }
     a[j+1]=temp;
   
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n%d",u);
}