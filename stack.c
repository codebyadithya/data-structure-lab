// Stack operations in C
#include <stdio.h>

int a[5], max = 5, top = -1, i;

void push(int val);
void pop(void);
void display(void);
int main(void);

int main(void)
{
    int count, value;

    printf("Enter the number of elements %d: ", max);
    scanf("%d", &count);


    printf("Enter %d stack elements:\n", count);
    for (i = 0; i < count; i++)
    {
        scanf("%d", &value);
        push(value);
    }
    pop();
    display();

    return 0;
}


void push(int val)
{
    top++;
    a[top] = val;
    printf("%d pushed into the stack.\n", val);
}

void pop(void)
{
    
    int val = a[top];
    top--;
    printf("%d popped from the stack.\n", val);
}

void display(void)
{
    
    printf("Stack elements are: ");
    for (i = top; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

