#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int count=0;
    char first_string[100]; 
    scanf("%s",first_string);
    
    char second_string[100]; 
    scanf("%s",second_string);
    
    char third_string[100]; 
    scanf("%s",third_string);
    
    for(int i=0;first_string[i]!='\0';i++)//as every string are same size then any of the strings can be use as condition
    {
        if(first_string[i]==second_string[i] && first_string[i]==third_string[i]) //cheaking that every letter is same or not for this index then count will be unchanged
        {
            count=count+0;
        }
        else if(first_string[i]==second_string[i] || first_string[i]==third_string[i] || second_string[i]==third_string[i])//cheaking two of same index elements are same or not then one letter will be changed
        {
            count++;
        }
        else //otherwise two letter will be changed
        {
            count+=2;
        }
    }
    printf("%d",count);
    return 0;
}
