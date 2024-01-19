//Assignment-2 Q-6
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    ((num&1)!=0 && 100<num && num<200)?printf("True"):printf("False");
    
    return 0;
}