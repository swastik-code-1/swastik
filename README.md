// write a program to print the average of 3 numbers.

#include<stdio.h>
#include<math.h>

int main() {

    float x;
    float y;
    float z;

    printf("enter you first number :");
    scanf("%f", &x);

    printf("enter you second number :");
    scanf("%f", &y);

    printf("enter you third number :");
    scanf("%f", &z);

    printf("average is : %.2f \n",(x+y+z)/3);

    return 0;


}
