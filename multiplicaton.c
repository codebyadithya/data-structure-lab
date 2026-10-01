//Matrix Multiplication 
#include <stdio.h>
int main()
{
    int rows1, cols1, rows2, cols2, i, j, k;
    int a[10][10], b[10][10], product[10][10];
   
    printf("Enter the number of rows for first matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for first matrix: ");
    scanf("%d", &cols1);
   
    printf("Enter the number of rows for second matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for second matrix: ");
    scanf("%d", &cols2);
   
    if (cols1 != rows2) 
    {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }
   
    printf("Enter elements for first matrix:\n");
    for(i = 0; i<rows1; i++)
    {
        for(j = 0; j<cols1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements for second matrix:\n");
    for(i = 0; i<rows2; i++) 
    {
        for(j = 0; j<cols2; j++) 
        {
            scanf("%d", &b[i][j]);
        }
    }
  
    // Initialize product matrix to zero
    for(i = 0; i<rows1; i++) 
    {
        for(j = 0; j<cols2; j++) 
        {
            product[i][j] = 0;
        }
    }

    // Matrix multiplication
    for(i = 0; i<rows1; i++) 
    {
        for(j = 0; j<cols2; j++) 
        {
            for(k = 0; k<cols1; k++) 
            {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Product of the two matrices:\n");
    for(i = 0; i<rows1; i++) 
    {
        for(j = 0; j<cols2; j++) 
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}