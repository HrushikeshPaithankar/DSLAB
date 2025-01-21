#include<stdio.h>
void main()
{
    int n,i,j,a[100],b[100],c[100],k=0,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
      for(i=0;i<n;i++)
    {
        if(a[i]%2==0 && a[i]!=0)
        {
            b[k]=a[i];
            c[k]=i;
            k++;
        }
    }
    //sort this array
          for(i=0;i<k;i++)
    {
        for(j=0;j<k;j++)
        {
            if(b[i]<b[j])
            {
                x=b[i];
                b[i]=b[j];
                b[j]=x;
            }
        }
    }
    //insert at index
    for(i=0;i<k;i++)
    {
        a[c[i]]=b[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}