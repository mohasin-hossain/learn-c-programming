// A. Say hello with C

#include<stdio.h>

int main()
{
    char str[100];

    fgets(str, sizeof(str), stdin);

    printf("Hello, %s", str);
}


// B. Basic Data Types 

#include<stdio.h>

int main()
{
    int a;
    long long int b;
    char c;
    float d;
    double e;

    scanf("%d %lld %*c%c %f %lf", &a, &b, &c, &d, &e);
    printf("%d\n", a);
    printf("%lld\n", b);
    printf("%c\n", c);
    printf("%.2f\n", d);
    printf("%.1lf\n", e);
}

// I. Welcome for you with Conditions

#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if(a >= b) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}


// J. Multiples

#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if(a % b == 0 || b % a == 0) {
        printf("Multiples\n");
    } else {
        printf("No Multiples\n");
    }
}

// N. Char

#include<stdio.h>

int main()
{
    char a;
    scanf("%c", &a);

    if(a >= 'a' && a <= 'z') {
        int ans = a - 32;
        printf("%c\n", ans);
    } else {
        int ans = a + 32;
        printf("%c\n", ans);
    }
}

// P. First digit

#include<stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    int first_digit = a / 1000;

    if(first_digit % 2 == 0) {
        printf("EVEN");
    } else {
        printf("ODD");
    }
}
