#include <stdio.h>

void main()
{
    int i, j, a[100][100], n, m, sum, k, c, b[100][100], u[9], temp, x = 0;
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
            b[i][j] = a[i][j];  
        }
    }
    for (i = 1; i < n - 1; i++)  
    {
        for (j = 1; j < m - 1; j++)  
        {
            x = 0;
            for (k = 0; k < 3; k++)
            {
                for (c = 0; c < 3; c++)
                {
                    u[x] = a[i + k - 1][j + c - 1];
                    x++;
                }
            }
            for (k = 0; k < 8; k++)
            {
                for (c = 0; c < 8 - k; c++)
                {
                    if (u[c] > u[c + 1])
                    {
                        temp = u[c];
                        u[c] = u[c + 1];
                        u[c + 1] = temp;
                    }
                }
            }
            b[i][j] = u[4];  
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}