#include <stdio.h>

int main(){
    int gross_salary,basic,da ,ta;
    printf("Enter your basic salary: ");
    scanf("%d", &basic);    
    da= (10*basic)/100;
    ta= (12*basic)/100;
    gross_salary=basic+da+ta;
    printf("Your gross salary is : %d", gross_salary);
}