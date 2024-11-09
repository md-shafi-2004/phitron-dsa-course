#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void forward(int num,int start) //for printing forward
{
    if(num==start)
    {
        return;
    }
    printf("%d ",start);
    forward(num,start+1);
}
void backword(int num)  //for printing backword
{
    if(num==0)
    {
        printf("\n");  //i have to print new line after completing one test
        return;
    }
   printf("%d ",num);
    backword(num-1);
}

int main() {
    int test,num;
    scanf("%d",&test);
    for(int i=0;i<test;i++)
    {
        scanf("%d",&num);
        forward(num,1);
        backword(num);
    }

       
    return 0;
}
