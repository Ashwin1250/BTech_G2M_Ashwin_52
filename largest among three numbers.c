#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("enter three numbers:");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);

    int largest;
    largest = n1;
    if (n1< n2){
        largest = n2;
    }
    if (largest<n3){
        largest = n3;
    }
    printf("the greatest number among all  is %d\n",largest);
}
