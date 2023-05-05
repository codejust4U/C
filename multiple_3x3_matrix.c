//Again writer Pankaj Kori
#include <stdio.h>
void main()
{
    system("cls");
    int a[3][3], b[3][3], c[3][3], sum = 0, i, j, k;
    printf("Enter the values of 1st matrix:-\n");
    for (i = 0; i < 3; i++)
    {
        /* code */
        for (j = 0; j < 3; j++)
        {
            /* code */
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the values of 2nd matrix:-\n");
    for (i = 0; i < 3; i++)
    {
        /* code */
        for (j = 0; j < 3; j++)
        {
            /* code */
            scanf("%d", &b[i][j]);
        }
    }
    printf("The multiply of 3 x 3 matrix is:-\n");
    for (i = 0; i < 3; i++)
    {
        /* code */
        for (j = 0; j < 3; j++)
        {
            /* code */
            sum = 0;
            for (k = 0; k < 3; k++)
            {
                /* code */
                sum = sum + a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }
    for (i = 0; i < 3; i++)
    {
        /* code */
        for (j = 0; j < 3; j++)
        {
            /* code */
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}
