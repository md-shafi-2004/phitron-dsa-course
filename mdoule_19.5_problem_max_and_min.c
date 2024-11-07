#include<stdio.h>
int arr[1002];
int min(int arr[],int sz)  //to get minimum value
{
    int identify_min=1000000;
    for (int j = 0; j < sz; j++)
    {
        if (arr[j]<identify_min)
        {
            identify_min=arr[j];
        }
        
    }
    return identify_min;

}
int max(int arr[],int sz)  //to get max value
{
   int identify_max=-1;
    for (int j = 0; j < sz; j++)
    {
        if (arr[j]>identify_max)
        {
            identify_max=arr[j];
        }
        
    }
    return identify_max;
}
void min_max(int arr[],int sz)  //to get max and min
{                               //void type because int can return one value
   int minvalue= min(arr,sz);    //but we need two values
   int maxvalue= max(arr,sz);    //call min and max function
   printf("%d %d",minvalue,maxvalue);
}


int main()
{
    int num;
    scanf("%d",&num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }
    min_max(arr,num); //call min_max function
    

    return 0;
}