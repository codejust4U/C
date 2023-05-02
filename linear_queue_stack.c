// WAP for stack operations
// Coder: Pankaj Kori
// Date: 29-08-2022
#include <stdio.h>
#define max 50
void insert();
void delete ();
void display();
int queue_array[max], rear = -1, front = -1, choice, add_item, i;
void main()
{
    system("cls");
    while (1)
    {
        printf("1.Insert the element. \n 2.Delete the element \n 3.Display the element\n 4.Exit\n");
        printf("Enter the choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        default:
            printf("Invalid choice.");
        }
    }
}
void insert()
{
    if (rear == max - 1)
    {
        printf("Queue Overflow.\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
            printf("Insert the element in queue: ");
            scanf("%d", &add_item);
            rear = rear + 1;
            queue_array[rear] = add_item;
        }
    }
}
void delete ()
{
    if (front == -1 || front > rear)
    {
        printf("Queue underflow \n");
    }
    else
    {
        printf("Deleted elements from queue is %d\n", queue_array[front]);
        front = front + 1;
    }
}
void display()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue_array[i]);
            printf("\n");
        }
    }
}
