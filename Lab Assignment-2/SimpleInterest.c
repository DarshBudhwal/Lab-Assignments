#include <stdio.h>

int main(){
    int p, r ,t ;
    int si;
    printf("Enter your principal :");
    scanf("%d", &p);
    printf("Enter your rate :");
    scanf("%d", &r);
    printf("Enter your time :");
    scanf("%d", &t);
    si = (p*r*t)/100;
    printf("Your simple interest is :%d", si);
}