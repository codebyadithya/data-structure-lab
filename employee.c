#include <stdio.h>

int main()
{
    int id;
    char name[30];
    float salary, tax, netsalary;

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Employee Salary: ");
    scanf("%f", &salary);

    tax = salary * 10 / 100;
    netsalary = salary - tax;

    printf("\nEmployee Details\n");
    printf("Employee ID: %d\n", id);
    printf("Employee Name: %s\n", name);
    printf("Employee Salary: %.2f\n", salary);
    printf("Income Tax: %.2f\n", tax);
    printf("Net Salary: %.2f\n", netsalary);

    return 0;
}