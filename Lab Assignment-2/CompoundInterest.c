#include <stdio.h>
#include <math.h>

int main(){
    int p , r, t,a,n;
    int ci;
    printf("Enter principal amount: ");
    scanf("%d", &p);
        printf("Enter rate: ");
    scanf("%d", &r);
        printf("Enter time: ");
    scanf("%d", &t);
        printf("Enter amount of years to be compunded: ");
    scanf("%d", &n);
    a = p * pow((1 + r / n), (n * t));
    ci = a-p;
    printf("Your ci is : %d ",ci);
    
}
