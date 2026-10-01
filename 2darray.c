//2D Array addition and store the result in another 2D array 
#include <stdio.h>
int main() 
{
    int rows, cols, i, j;
    int a[10][10], b[10][10], sum[10][10];
   
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
   
   
   
    printf("Enter elements for first array:\n");
    for(i = 0; i<rows; i++)
    {
        for(j = 0; j<cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements for second array:\n");
    for(i = 0; i<rows; i++) 
    {
        for(j = 0; j<cols; j++) 
        {
            scanf("%d", &b[i][j]);
        }
    }
  
    for(i = 0; i<rows; i++) 
    {
        for(j = 0; j<cols; j++) 
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of the two arrays:\n");
    for(i = 0; i<rows; i++) 
    {
        for(j = 0; j<cols; j++) 
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}