// Sum of Consecutive Odd Numbers

#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        if (a > b) {
            int temp = a;
            a = b;
            b = temp;
        }

        int sum = 0;
        for(int j = a + 1; j < b; j++) {
            if(j % 2 != 0) {
                sum += j;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}

// Summation from 1 to N

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    long long int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("%lld\n", sum);

    return 0;
} // Not time efficient

// Alternative implementation

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    long long int sum = (1LL * (n + 1) * n) / 2;

    printf("%lld\n", sum);

    return 0;
}


// factorial


#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for(int cs = 0; cs < t; cs++) {
        int n;
        scanf("%d", &n);

        long long fact = 1;
        for(int i = 1; i <= n; i++) {
            fact *= i;
        }

        printf("%lld\n", fact);
    }

    return 0;
}


// Shape3 

// For example N = 4

//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *

// We can break down into two parts

//           i   k   space
//    *      1   1    3
//   ***     2   3    2
//  *****    3   5    1
// *******   4   7    0


// *******   4   7    0
//  *****    3   5    1
//   ***     2   3    2
//    *      1   1    3

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int k = 1;
    for(int i = 1; i <= n; i++, k += 2) {
        
        int space = n - i;
        while(space--) {
            printf(" ");
        }

        for(int j = 1; j <= k; j++) {
            printf("*");
        }
        printf("\n");
    }

    k -= 2;

    for(int i = n; i >= 1; i--, k -= 2) {
        
        int space = n - i;
        while(space--) {
            printf(" ");
        }

        for(int j = 1; j <= k; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}