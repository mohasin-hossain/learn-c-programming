// Comparison

#include<stdio.h>

int main ()
{
    int a, b;
    char s;
    scanf("%d %c %d", &a, &s, &b);
    
    if(s == '>') {
        if(a > b) {
            printf("Right\n");
        } else {
            printf("Wrong\n");
        }
    } else if(s == '<') {
        if(a < b) {
            printf("Right\n");
        } else {
            printf("Wrong\n");
        }
    } else {
        if( a == b) {
            printf("Right\n");
        } else {
            printf("Wrong\n");
        }
    }

    return 0;
}

// Mathematical Expression

#include<stdio.h>

int main()
{
    int a, b, c;
    char s, q;

    scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);

    if(s == '+') {
        if(a + b == c) {
            printf("Yes\n");
        } else {
            printf("%d\n", a + b);
        }

    } else if (s == '-') {
        if(a - b == c) {
            printf("Yes\n");
        } else {
            printf("%d\n", a - b);
        }
    } else if (s == '*') {
        if(a * b == c) {
            printf("Yes\n");
        } else {
            printf("%d\n", a * b);
        }
    }

    return 0;
}

// Memo and Momo

#include<stdio.h>

int main()
{
    long long int a, b, k;
    scanf("%lld %lld %lld", &a, &b, &k);

    if(a % k == 0 && b % k == 0) {
        printf("Both\n");
    } else if (a % k == 0) {
        printf("Memo\n");
    } else if (b % k == 0) {
        printf("Momo\n");
    } else {
        printf("No One\n");
    }

    return 0;
}

// Sort Numbers

#include<stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a <= b && a <= c) {
        // a minimum
        if(b <= c) {
            // c maximum
            printf("%d\n%d\n%d\n", a, b, c);
        } else {
            // b maximum
            printf("%d\n%d\n%d\n", a, c, b);
        }
    } else if (b <= a && b <= c) {
        // b minimum
        if(a <= c) {
            // c maximum
            printf("%d\n%d\n%d\n", b, a, c);
        } else {
            // a maximum
            printf("%d\n%d\n%d\n", b, c, a);
        }
    } else {
        // c minimum
        if(a <= b) {
            // b maximum
            printf("%d\n%d\n%d\n", c, a, b);
        } else {
            // a maximum
            printf("%d\n%d\n%d\n", c, b, a);
        }
    }
    
    printf("\n");
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}
