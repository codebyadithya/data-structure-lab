//Transpose of a matrix 
#include <stdio.h>
int main()
{
    int rows, cols, i, j;
    int a[10][10], transpose[10][10];
   
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
   
    printf("Enter elements for the array:\n");
    for(i = 0; i<rows; i++)
    {
        for(j = 0; j<cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
  
    for(i = 0; i<rows; i++) 
    {
        for(j = 0; j<cols; j++) 
        {
            transpose[j][i] = a[i][j];
        }
    }

    printf("Transpose of the array:\n");
    for(i = 0; i<cols; i++) 
    {
        for(j = 0; j<rows; j++) 
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}