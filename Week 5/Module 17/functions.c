// Function Type 1: Return + Parameter
//////////////////////////////////////

#include<stdio.h>

int add(int a, int b) {
    printf("Function Called\n");
    int sum = a + b;
    return sum;
}

int main() {
    printf("Before\n");
    // int result = add(20, 11);
    // printf("%d\n", result);

    printf("%d\n", add(20, 11));

    printf("After\n");

    return 0;
}

// Function Type 2: Return + NO Parameter
////////////////////////////////////////

// Example 1


#include<stdio.h>

int a, b;

int add() {
    printf("Function Called\n");
    int sum = a + b;
    return sum;
}

int main() {
    printf("Before\n");
    a = 20, b = 25;
    printf("%d\n", add());

    printf("After\n");

    return 0;
}

// Example 2

#include<stdio.h>

int add() {
    printf("Function Called\n");
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    return sum;
}

int main() {
    printf("Before\n");

    printf("%d\n", add());

    printf("After\n");

    return 0;
}

// Example 3

#include<stdio.h>

double getPI() {
    return 3.14159;
}

int main() {
    printf("Before\n");

    printf("%lf\n", getPI());

    printf("After\n");

    return 0;
}

// Function Type 3: No Return + Parameter
////////////////////////////////////////


#include<stdio.h>

void add(int a, int b) {
    printf("Function Called\n");
    int sum = a + b;
    printf("%d\n", sum);
}

void alphaCheck(char c) {
    if(c >= 'a' && c <= 'z') printf("Lower\n");
    else printf("Upper\n");
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    add(a, b);

    alphaCheck('B');
    alphaCheck('t');

    return 0;
}

// Function Type 4: No Return + No Parameter
////////////////////////////////////////

#include<stdio.h>

void add() {
    printf("Function Called\n");
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    printf("%d\n", sum);
}

void greetings() {
    printf("Hello, Good Morning\n");
}

int main() {

    add();
    greetings();

    return 0;
}