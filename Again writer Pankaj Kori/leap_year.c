//Again writer Pankaj Kori
//Date: 15-09-2022
#include <stdio.h>

void main()
{
    system("cls");
    int year;
    printf("Enter the year\n");
    scanf("%d", &year);
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        printf("%d is leap year", year);
    }
    else
    {
        printf("%d isn't leap year", year);
    }
}
