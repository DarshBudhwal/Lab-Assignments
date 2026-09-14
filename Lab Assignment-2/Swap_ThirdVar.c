#include <stdio.h>

int main(){
    int a , b, c;
    printf("Enter your variable 1 : ");
    scanf("%d", &a);
    printf("Enter your variable 2 : ");
    scanf("%d", &b);

    c=a;
    a=b;
    b=c;

    printf( "1st variable after swapping is %d \n",a);
    printf( "2nd variable after swapping is %d",b);
    return 0;
}