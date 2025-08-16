// print 1(true) or 0(false) for following statements :

#include<stdio.h>
#include<math.h>

int main() {

    // a. if it's sunday & it's snowing -> true
    int is_sunday = 1;
    int is_snowing = 1;
    printf("Is it Sunday AND snowing ? : %d \n", is_sunday && is_snowing);

    // b. if it's monday or it's raining -> true
    int is_monday = 0;
    int is_raining = 1;
    printf("Is it Monday OR raining ? : %d \n", is_monday || is_raining);

    // c. if number is greater than 9 & less than 100 -> true (2 digit mumber)
    int number;
    printf("enter you numer :");
    scanf("%d", &number);
    printf("Is the number two-digit ? : %d \n", number>9 && number<100);
    
    return 0;
}
