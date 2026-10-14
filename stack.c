
#include <stdio.h>

int a[5], max = 5, top = -1, i;

void push(int val);
void pop(void);
void display(void);
void peek(void);

int main(void)
{
    int choice, value;

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
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
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
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}

void push(int val)
{
    if (top == max - 1)
    {
        printf("Stack overflow!\n");
    }
    else
    {
        top++;
        a[top] = val;
        printf("%d pushed into the stack.\n", val);
    }
}

void pop(void)
{
    if (top == -1)
    {
        printf("Stack underflow!\n");
    }
    else
    {
        int val = a[top];
        top--;
        printf("%d popped from the stack.\n", val);
    }
}

void display(void)
{
    if (top == -1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Stack elements are: ");

        for (i = top; i >= 0; i--)
        {
            printf("%d ", a[i]);
        }

        printf("\n");
    }
}

void peek(void)
{
    if (top == -1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Top element is: %d\n", a[top]);
    }
}
