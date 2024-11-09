#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int row,column;
    scanf("%d %d",&row,&column);
    int arr[row][column];
    
    if(row==column)  //cheaking is it square or not
    {
        for(int i=0;i<row;i++)  //taking the elements of 2D array
      {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&arr[i][j]);
        }
      }
        int flag=1;
        
        for(int i=0;i<row;i++)  //taking the elements of 2D array
      {
        for(int j=0;j<column;j++)
        {
           if(i==j)  //cheaking primary diagonal elements
        {
         if(arr[i][j]!=1)
          {
             flag=0;
             goto exit_loop;
          }
        }
     
        else if(i+j==row-1) //cheaking secondary diagonal elements
     
       {
         if(arr[i][j]!=1)
         {
             flag=0;
             goto exit_loop;
         }
       }
     
        else  //cheaking other elements
        {
            if(arr[i][j]!=0)
            {
                flag=0;
                goto exit_loop;
            }
        } 
        }
    }
     
        
        exit_loop:  //if above conditions are false then change the flag and exit the loop and compiler will come here
        if(flag==1)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    } 

    else
    {
        printf("NO");
    }
    
    return 0;
}
