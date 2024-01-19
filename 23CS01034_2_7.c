//Assignment-2 Q-7
#include<stdio.h>
int main()
{
    float cost;
    float tip;
    float tax;
    printf("Enter the mealcost: ");
    scanf("%f",&cost);
    printf("Enter the tippercent: ");
    scanf("%f",&tip);
    printf("Enter the taxpercent: ");
    scanf("%f",&tax);

    float TotalCost = cost + (cost*tip/100) + (cost*tax/100);
    printf("Total Meal cost is: %.0f",TotalCost);
    
    return 0;
}   