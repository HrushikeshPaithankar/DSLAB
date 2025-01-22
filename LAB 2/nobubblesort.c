#include<stdio.h>
void main()
{
    int n,i,k,j,a[100],u=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
                u++;
            }
        }
    }
    printf("%d",u);

}