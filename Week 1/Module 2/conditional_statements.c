// #include<stdio.h>

// int main ()
// {
//     int price = 40;

//     if(price <= 50) {
//         printf("Buy 4 EGGS \n");
//         printf("Take %d taka back from shop", 50 - price);
//     } else {
//         printf("Buy 2 Eggs");
//     }

//     return 0;
// }

#include <stdio.h>

int main() {
    int number = 7;

    // Using if, else if, and else
    if (number > 10) {
        printf("The number is greater than 10\n");
    } else if (number == 7) {
        printf("The number is equal to 7\n");
    } else {
        printf("The number is less than or equal to 10\n");
    }

    // Using switch to print corresponding day
    int day = 2;

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Invalid day\n");
    }

    return 0;
}