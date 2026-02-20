#include <stdio.h>
int main(){
    int n1,n2;
    char operator;

    printf("enter first number");
    scanf("%d",&n1);
    printf("enter second number ");
    scanf("%d",&n2);
    printf("enter an operator as  per the requirement of performation");
    scanf(" %c",&operator);

    switch (operator){
        case'+':
                printf("result=%d\n",n1+n2);
                break;
        case '-':
                 printf("result=%d\n",n1-n2);
                 break;
        case '*':
                printf("result=%d\n",n1*n2);
                break;
        case '/':
                printf("result=%d\n",n1/n2);
                break;

    }
    
    
}
