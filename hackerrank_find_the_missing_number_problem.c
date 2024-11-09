#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int test;
    scanf("%d",&test);
    
    for(int i=0;i<test;i++)
    {
        long long int multiplication;
        scanf("%lld",&multiplication); //multiplication value range is 1*10^18 thats why lld
            
        int value1,value2,value3; 
        scanf("%d %d %d",&value1,&value2,&value3);
        long long int three_mul=value1*value2*value3; // every value range 1*10^6 then three value multiplication can be up the limit of int which is 1*10^9
        
        if(multiplication%three_mul==0)
        {
            printf("%lld",multiplication/three_mul);  // lld because long long int devided by long long int answer is lld
        }
        else
        {
            printf("-1");
        }
        printf("\n");
    }
    return 0;
}
