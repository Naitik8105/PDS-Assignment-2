//Assignment-2 Q-2
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:\t");
    scanf("%d %d %d",&a,&b,&c);

    int max;
    (a>=b && a>=c)?(max=a):(NULL);
    (b>=a && b>=c)?(max=b):(NULL);
    (c>=b && c>=a)?(max=c):(NULL);
    
    printf("maximum number is: %d",max);
    return 0;
}