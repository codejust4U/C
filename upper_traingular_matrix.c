// WAP for finding upper triangular matrix
//Coder: Pankaj Kori 
//Date: 22-08-2022 
#include <stdio.h>
void main()
{
    system("cls");
    int i, j, r, c, array[10][10];
    printf("Enter the rows and columns:\n");
    scanf("%d %d", &r, &c);
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            printf("array[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("Matrix is\n");
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            
            printf("%d",array[i][j]);
        }
        printf("\n");
    }

    printf("\nUpper triangular matrix is");
    for (i = 1; i <= r; i++)
    {
        printf("\n");
        for (j = 1; j <= c; j++)
        {
            if (j >= i)
            {
                printf("%d", array[i][j]);
            }
            else
            {
                
            }
            
        }
    }  
}
