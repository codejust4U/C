#include <stdio.h>

void main()
{
    system("cls");
    int array[100], n, c, d, swap;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the %d elements: ", n);

    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    for (c = 0; c < n - 1; c++)
    {
        for (d = 0; d < n - c - 1; d++)
        {
            if (array[d] > array[d + 1])
            {
                swap = array[d];
                array[d] = array[d + 1];
                array[d + 1] = swap;
            }
        }
    }

    printf("After sorting the elements through bubble sort:\n");

    for (c = 0; c < n; c++)
        printf("%d\n", array[c]);
}
