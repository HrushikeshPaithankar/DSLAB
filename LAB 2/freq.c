#include <stdio.h>
void main()
{
    int i, j, a[100], n, k = 0, b[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i]=-1;
    }
    for (i = 0; i < n; i++)
    {
        k = 1;
        for (j = i+1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                k++;
               b[j]=0;
            }
        }
    if(b[i]!=0)
    {b[i]=k;}
 
    }
       for(i=0;i<n;i++)
    {
        if(b[i]!=0)
        {
            printf("freq of %d is %d\n",a[i],b[i]);
        }
    }
}