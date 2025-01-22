#include<stdio.h>
void main()
{
    int i,j,sum,n;
    float k;
    float a[100],b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    scanf("%f",&k);
    for(i=0;i<=n-k;i++)
    {sum=0;
        for(j=i;j<i+k;j++)
        {
            sum=sum+a[j];
        }
        b[i]=sum/k;
        
    }
    for(i=0;i<=n-k;i++)
    {
        printf("%f ",b[i]);
    }
}