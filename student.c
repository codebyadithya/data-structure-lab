#include <stdio.h>

int main()
{
    int i, total, n;
    char name[50][30];
    int age[50];

    printf("Enter total number of students: ");
    scanf("%d", &total);

    for (i = 0; i < total; i++)
    {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", name[i]);

        printf("Enter age: ");
        scanf("%d", &age[i]);
    }

    printf("\nHow many first students do you want to display? ");
    scanf("%d", &n);

    if (n > total || n < 1)
    {
        printf("Invalid number of students!");
    }
    else
    {
        printf("\nDetails of first %d students:\n", n);

        for (i = 0; i < n; i++)
        {
            printf("\nName: %s", name[i]);
            printf("\nAge: %d\n", age[i]);
        }
    }

    return 0;
}