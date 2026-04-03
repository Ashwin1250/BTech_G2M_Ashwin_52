#include<stdio.h>
int main()
{
    int year;
    printf("enter the year:");
    scanf("%d",&year);
    if (year%400==0)
    {
        printf("%d is the leap year /n",year);
    }
    else if (year%100==0)
    {
        printf("%d not a leap year/n",year);
    }
    else if(year%4==0)
    {
        printf("%d year given is a leap year /n",year);
    }
    else{
        printf("%d given year is not a leap year /n",year);
    }
    return 0;
}
