#include <stdio.h>

int a[5], top = -1;

void push()
{
    int n, i, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n > 5 - top - 1 || n <= 0)
    {
        printf("Stack overflow\n");
        return;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter element: ");
        scanf("%d", &value);
        top++;
        a[top] = value;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        printf("Popped element: %d\n", a[top]);
        top--;
    }
}

void display()
{
    int i;

    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements are:\n");
        for (i = top; i >= 0; i--)
        {
            printf("%d ", a[i]);
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
        printf("Top element is: %d\n", a[top]);
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Peek\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                peek();
                break;

            case 5:
                printf("Program ended\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 5);

    return 0;
}