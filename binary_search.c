#include<stdio.h>
#include<conio.h>

#define MAX_SIZE 100
int size;
void binary_search(int[],int);

int main() {
    system("cls");
    int arr_search[MAX_SIZE], i,element;
    printf("Enter the no. of elements: ");
    scanf("%d",&size);
        printf("\nEnter %d Elements for Searching : \n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &arr_search[i]);

	printf("Enter Element to Search : ");
    scanf("%d", &element);
   

    binary_search(arr_search,element);
    getch();
}

void binary_search(int fn_arr[],int element) {
   int f = 0, r = size,mid;
   
   while (f <= r) {
	  mid = (f+r)/2;

	  if (fn_arr[mid] == element) {
         printf("\nSearch Element  : %d  : Found :  Position : %d.\n", element, mid+1);
         break;
	  }
      else if (fn_arr[mid] < element)
         f = mid + 1;    
      else
         r = mid - 1;
   }
   
   if (f > r)
      printf("\nSearch Element : %d  : Not Found \n", element);
}
