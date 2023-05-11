//Again writer Pankaj Kori
#include <stdio.h>
#define size 10
void main()
{
    system("Cls");
    float arr[10];
    int i;
    float sum = 0;
    float avg;
    printf("Enter the elements of array\n");
    for (i = 0; i < size; i++)
    {
        
        scanf("%f", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    avg =  sum/10;
    printf("The sum of elements of array = %.2f\n", sum);
    printf("The average of elements is %.2f",avg);
}
