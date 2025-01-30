#include<stdio.h>
void main()
{
    int i,j,a[100][100],n,m,sum,k,c,b[100][100];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
            b[i][j]=a[i][j];
        }
    }
    for(i=0;i<n-2;i++)
    {
        for(j=0;j<n-2;j++)
        {sum=0;
            for(k=0;k<3;k++)
            {
                for(c=0;c<3;c++)
                {
                    sum=sum+a[i+k][j+c];
                }
            }
            sum=sum/9;
            b[i+1][j+1]=sum;
        }
    }
       for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}