//Coder Pankaj Kori
#include <stdio.h>
void main()
{
    system("cls");
    //container for storing 3x3 variable of 1st matrix , 2nd matrix and their summation
    int a[3][3], b[3][3], sum[3][3], i, j;
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
    printf("The sum of 3 x 3 matrix is:-\n");
    for (i = 0; i < 3; i++)
    {
        /* code */
        for (j = 0; j < 3; j++)
        {
            /* code */
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        /* code */
        for (j = 0; j < 3; j++)
        {
            /* code */
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    
}
