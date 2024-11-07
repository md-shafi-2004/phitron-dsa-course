#include<stdio.h>
int arr[1002];
int identify_max=-1000000000;   /*initializing the identify_max with ultimate max value
                                  for this problem*/

int max(int arr[],int sz,int count) //count variable for travers the index
{
    if (count==sz)  //when last index then function return identify_max
    {
       return identify_max; 
    }
    if (arr[count]>identify_max)
    {
        identify_max=arr[count];  //allocation max number than current identify_max
    }
    
    
    return max(arr,sz,count+1); //recursive call,must use return.do not use count++
}

int main()
{
    int num;
    scanf("%d",&num);
    arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",max(arr,num,0));
    

    return 0;
}