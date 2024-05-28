#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int top = -1;
int arr[MAX];
void display();
void insert(int n)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow !!! \nCannot Insert the element\n");
    }
    else
    {
        top++;
        arr[top] = n;
    }
    display();
}

void delete()
{
    if (top == -1)
    {
        printf("Stack Underflow !!!\nStack is empty\n");
    }
    else
    {
        printf("The deleted element is %d\n", arr[top]);
        top--;
    }
    display();
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            printf("The element at %d position is %d\n", i + 1, arr[i]);
        }
        printf("\n");
    }
}

void peek()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("The top element in the stack is %d\n", arr[top]);
    }
}

int main()
{
    int choice, num1, exitoption, flag = 1;
    while (flag)
    {
        printf("Enter the opeartions to perform : \n");
        printf("Press 1 for Insert\nPress 2 for Delete\nPress 3 for Dispaly\nPress 4 for Peek\nPress 5 for Exit\n");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to insert ");
            scanf("%d", &num1);
            insert(num1);
            break;

        case 2:
            delete ();
            break;

        case 3:
            display();
            break;

        case 4:
            peek();
            break;

        default:
            printf("Invalid option\nDo you Wanna Continue\n");
            printf("If Yes Press 1\nElse Press 2\n");
            scanf("%d", &exitoption);

            if (exitoption == 1)
            {
                continue;
            }
            else
            {
                flag = 0;
            }
            break;
        }
    }
}