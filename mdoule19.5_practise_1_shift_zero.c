#include<stdio.h>
int arr[1002]; //global array

void arfunc(int arr[],int sz)
{
    int count_zero=0;
    for (int i = 0; i < sz; i++) //for counting zero
    {
        if (arr[i]==0)
        {
            count_zero++;
        }
        
    }

    int other_num=sz-count_zero;  //other word conting
    int new_arr[sz];  //to organise the primary array

    int next_element=0;  //to store other number in sequence

    for (int i = 0; i < sz; i++) //to store other number in sequence
    {
        if (arr[i]!=0)
        {
            new_arr[next_element]=arr[i];
            next_element++;
        }
        
    }

    for (int i = other_num; i < sz; i++)
    {
        new_arr[i]=0;
    }

    for (int i = 0; i < sz; i++)
    {
        printf("%d ",new_arr[i]);
    }
    

    
}

int main()
{
    int num;  //number of index
    scanf("%d",&num);
    arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);  //taking element of array
    }

    arfunc(arr,num); //call the arfunc


    
    
    return 0;
}