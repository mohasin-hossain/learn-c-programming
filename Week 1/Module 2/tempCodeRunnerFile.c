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