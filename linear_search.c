#include <stdio.h>
#define MAx 100

int array[MAx];
int i, to_search, found, size;
void main()
{
    system("cls");
    printf("Enter the number of elements to be entered: ");
    scanf("%d", &size);

    printf("Enter the elements\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the element to be searched in array\n");
    scanf("%d", &to_search);

    found = 0;
    for (i = 0; i < size; i++)
    {

        if (array[i] == to_search)
        {

            found = 1;
            break;
        }
    }
    if (found == 1)
    {

        printf("%d is found at position %d", to_search, i+1);
    }
    else
    {
        printf("%d isn't found in array", to_search);
    }
}
