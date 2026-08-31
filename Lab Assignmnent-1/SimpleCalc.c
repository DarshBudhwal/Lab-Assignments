#include <stdio.h>

int add(){
    printf("ADDITION \n");
    int x,y,z;
    printf("Enter your integer 1 :");
    scanf("%d", &x);
    printf("Enter your integer 2 :");
    scanf("%d", &y); 
    z=x+y;
    printf("Your addition to these is : %d \n\n", z);
}
int subt(){
    printf("SUBTRACTION \n");
    int x,y,z;
    printf("Enter your integer 1 :");
    scanf("%d", &x);
    printf("Enter your integer 2 :");
    scanf("%d", &y); 
    z=x-y;
    printf("Your subtraction to these is : %d \n\n", z);
}
int multi(){
    printf("Multiplication \n");
    int x,y,z;
    printf("Enter your integer 1 :");
    scanf("%d", &x);
    printf("Enter your integer 2 :");
    scanf("%d", &y); 
    z=x*y;
    printf("Your Multiplication to these is : %d \n", z);
}
int main(){
    add();
    subt();
    multi();
}