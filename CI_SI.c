//Again writer Pankaj Kori
#include <stdio.h>
#include <math.h>

void main()
{
    system("cls");
    float p, t, r;
    float SI, CI;
    printf("Enter the principle amount:- ");
    scanf("%f", &p);
    printf("Enter the time:- ");
    scanf("%f", &t);
    printf("Enter the rate of interest:- ");
    scanf("%f", &r);
    SI = (p * t * r) / 100;
    CI = (p * (pow((1 + r / 100), t)))-p;
    printf("Simple interest = %.2f\n", SI);
    printf("Compound interest = %.2f\n", CI);
   
}
