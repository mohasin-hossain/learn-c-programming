// #include <stdio.h>

// int main() {
//     int a = 5;
//     int b = 10;

//     // Using relational operators
//     if (a == b) {
//         printf("a is equal to b\\n");
//     } else {
//         printf("a is not equal to b\\n");
//     }

//     if (a != b) {
//         printf("a is not equal to b\\n");
//     } else {
//         printf("a is equal to b\\n");
//     }

//     if (a > b) {
//         printf("a is greater than b\\n");
//     } else {
//         printf("a is not greater than b\\n");
//     }

//     if (a < b) {
//         printf("a is less than b\\n");
//     } else {
//         printf("a is not less than b\\n");
//     }

//     if (a >= b) {
//         printf("a is greater than or equal to b\\n");
//     } else {
//         printf("a is not greater than or equal to b\\n");
//     }

//     if (a <= b) {
//         printf("a is less than or equal to b\\n");
//     } else {
//         printf("a is not less than or equal to b\\n");
//     }

//     return 0;
// }


#include<stdio.h>
#include<stdbool.h>

int main()
{
    int a = 5, b = 10;
    bool checker = a == b; // here checker is my variable
    // bool checker = a > b; 
    // bool checker = a < b; 

    printf("Result = %d", checker);   // It gives either true or false. If the answer is 0 it means false, if the answer is 1 it means it is true.
    return 0;
}