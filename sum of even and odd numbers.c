#include <stdio.h>
int main()
{
    int n, i;
    int evensum = 0, oddsum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            evensum += i;
        } else {
            oddsum += i;
        }
    }
    printf("sum of even numbers= %d\n", evensum);
    printf("sum of odd numbers= %d\n", oddsum);
    return 0;

}
