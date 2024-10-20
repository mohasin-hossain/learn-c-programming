// M. Lucky Numbers

#include<stdio.h>

int main() 
{
    int a, b;
    scanf("%d %d", &a, &b);

    int foundLucky = 0;

    for(int i = a; i <= b; i++) {
        int current = i;
        int isLucky = 1;

        while(current > 0) {
            int digit = current % 10; 
            if(digit != 4 && digit != 7) {
                isLucky = 0;
                break;
            }
            current /= 10; 
        }

        if(isLucky) {
            printf("%d ", i);
            foundLucky = 1;
        }
    }

    if(!foundLucky) {
        printf("-1");
    }

    return 0;
}

// H. One Prime

#include<stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    int isPrime = 1;

    for(int i = 2; i < x; i++) {
        if(x % i == 0) {
            isPrime = 0;
            break;
        } 
    }

    if(isPrime) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

// Primes from 1 to n

#include<stdio.h>
#include<math.h> 

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 2; i <= n; i++) {
        int isPrime = 1;
        for(int j = 2; j <= sqrt(i); j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if(isPrime) {
            printf("%d ", i);
        }
    }

    return 0;
}

// Sequence of Numbers and Sum

#include<stdio.h>

int main()
{
    int n, m;

    while(scanf("%d %d", &n, &m) !=EOF) {

        if(n > m) {
            int temp = n;
            n = m;
            m = temp;
        }

        if(n <= 0 || m <= 0) {
            break;
        }

        int sum = 0;
        for(int i = n; i <= m; i++) {
            printf("%d ", i);
            sum += i;
        }

        printf("sum =%d\n", sum);
    }

    return 0;
}
