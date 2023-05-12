// WAP for finding transpose of 3x3 matrix
// Coder: Pankaj Kori
// Date: 22-08-2022
#include <stdio.h>
void main()
{
    system("cls");
    int a[10][10], transpose[10][10], r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("\nEnter matrix elements:\n");
    for (i = 0; i < r; ++i){
        for (j = 0; j < c; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < r; ++i){
        for (j = 0; j < c; ++j)
        {
            transpose[j][i] = a[i][j];
        }
    }
    printf("Transpose of the matrix:\n");
    for (i = 0; i < c; ++i){
        for (j = 0; j < r; ++j)
        {
            printf("%d  ", transpose[i][j]);
            if (j == r - 1)
                printf("\n");
        }
    }
}
