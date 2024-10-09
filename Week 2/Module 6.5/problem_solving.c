// Next alphabet

#include<stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    
    if(c >= 'a' && c <= 'y') {
        printf("%c\n", c + 1);
    }
    
    if (c == 'z') {
        printf("%c\n", c - 25);
    }

    return 0;
}


// Divisors

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}

// Even numbers

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n == 1 ) {
        printf("%d\n", -1);
    } else {
        for(int i = 2; i <= n; i += 2) {
            printf("%d\n", i);
        }
    }

    return 0;
}

// lucky numbers

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int last_digit = n % 10;
    int first_digit = n / 10;

    if (last_digit == 0) {
        printf("YES\n");
    } else if(first_digit % last_digit == 0 || last_digit % first_digit == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

// Pattern 1

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

// Answer:
// input - 6
// 1
// 12
// 123
// 1234
// 12345
// 123456


// Pattern 2

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = n; i >= 1; i--) {
        for(int j = i; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

// input - 5
// Answer:
// 54321
// 4321
// 321
// 21
// 1


// Pattern 3


#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%c", 64 + i);
        }
        printf("\n");
    }

    return 0;
}

// input - 5
// Answer
// A
// BB
// CCC
// DDDD
// EEEEE

// Pattern 4

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

// Input - 5
// Answer
//        *
//      * * *
//    * * * * *
//  * * * * * * *
// * * * * * * * * *
