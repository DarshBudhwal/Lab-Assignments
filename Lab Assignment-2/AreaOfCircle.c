#include <stdio.h>

int main(){
    float area, r;
    const float pi=3.14;
    printf("Enter your circle radius :");
    scanf("%f", &r);
    area = pi*r*r;
    printf("Area of circle is : %f", area);
}