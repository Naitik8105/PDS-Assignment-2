//Assignment-2 Q-3
#include<stdio.h>
int main()
{
    int d=0;
    int Y,M,W,D;
    printf("Enter the number of days: ");
    scanf("%d",&d);

    Y=d/365;
    M=(d%365)/30;
    W=((d%365)%30)/7;
    D=((d%365)%30)%7;
    
    printf("\n Year: %d",Y);
    printf("\n Month: %d",M);
    printf("\n Week: %d",W);
    printf("\n Day: %d",D);
    return 0;
}