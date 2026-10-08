#include <stdio.h>
int a[5], top = -1, max=5, i;

int main()
{
    int choice;
    printf("Enter a choice\n1.Push\n2.Pop\n3.Display\n4.Peek\n5.Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    do{
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
        exit(0);
        break;
    default:
        printf("Invalid Value");
        break;
    }
    }while(choice<4&&choice>0);
    return 0;
}

int push()
{
    if(top==max-1)
    {
        printf("The stack is overflow");
        exit(0);
    }
    else
    {
        int count, value;
        printf("Enter the number of elements<%d: ", max);
        scanf("%d", &count);
        printf("Enter %d stack elements:\n", count);
        for (i = 0; i < count; i++)
        {
            scanf("%d", &value);
            top++;
            a[top] = value;
            printf("%d pushed into the stack\n", value);
        }
    }
    return(0);
    
}

int pop()
{
    if(top==-1)
    {
        printf("The stack is underflow");
        exit(0);
    }
    else
    {
        int n;
        printf("Enter the number to be poped out of stack: ");
        scanf("%d", &n);
        
                n=a[top];
                top=top--;
                printf("%d popped from the stack\n", n);
        
    }
    return(0);
    
}

int peek()
{
    int p;
    printf("Enter the element place to be peek ");
    scanf("%d", &p);
    for (i = top; i >0; i--)
    {
        printf("%d ", a[p]);
    }
    return(0);
}

int display()
{
    
    printf("Stack elements are: ");
    for (i = top; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return(0);
}

