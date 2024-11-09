#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int row,column;
    scanf("%d %d",&row,&column);
    int arr[row][column];
    
    for(int i=0;i<row;i++)  //taking element of 2D array
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(int i=0;i<row;i++) //swaping first column and last column,here column number is constant
    {
        int temp=arr[i][0];
        arr[i][0]=arr[i][column-1];
        arr[i][column-1]=temp;
    }
    
    for(int i=0;i<column;i++)  //swaping first row and last row,here row number is constant
    {
        int temp=arr[0][i];
        arr[0][i]=arr[row-1][i];
        arr[row-1][i]=temp;
    }
    
    for(int i=0;i<row;i++)  //printing aray after swaping
    {
        for(int j=0;j<column;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
