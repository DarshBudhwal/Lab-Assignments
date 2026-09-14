#include <stdio.h>

int main(){
    int a , b ;
    printf("Enter 1st integer:");
    scanf("%d", &a);
    printf("Enter 2nd integer:");
    scanf("%d", &b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("Your 1st integer after swapping is %d \n", a);
    printf("Your 2nd integer after swapping is %d" , b);
    return 0;
}