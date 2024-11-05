// Print 1 to n

#include<stdio.h>

void printNum(int x, int n)
{
    if(x > n) {
        return;
    }

    printf("%d\n", x);

    printf("Before function call, Current X = %d\n", x);

    printNum(x + 1, n);

    printf("After function call, Current X = %d\n", x);
}


int main()
{   
    printf("Before function call in main\n");

    printNum(1, 5);

    printf("After function call in main\n");
    return 0;
}

// Print n to 1

#include<stdio.h>

void printNum(int x) {

    if(x == 0) {
        return;
    }

    printf("%d\n", x);

    printNum(x - 1);
}

int main()
{
    printNum(5);
    return 0;
}

// another way


#include<stdio.h>

void printNum(int x, int n) {

    if(x > n) {
        return;
    }

    printNum(x + 1, n);

    printf("%d\n", x);
}

int main()
{
    printNum(1, 5);
    return 0;
}