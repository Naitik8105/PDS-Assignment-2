//Assignment-2 Q-5
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    if((num&1)==0)
    {
        printf("Even");
    }
    else{
        printf("Odd");
    }
    
    return 0;
}