// B. Even Numbers

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int evenCount = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            evenCount++;
            printf("%d\n", i);
        }
    }

    if (evenCount == 0)
    {
        printf("%d\n", -1);
    };
}

// alternative solution

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n == 1)
    {
        printf("%d\n", -1);
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d\n", i);
            }
        }
    }
}

// Fixed Password

#include<stdio.h>

int main()
{
    int n;

    while(scanf("%d", &n) !=EOF){
        if(n == 1999) {
            printf("Correct\n");
            break;
        } else {
            printf("Wrong\n");
        }
    }

    return 0;
}

// Max

#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x, max = INT_MIN;
    for(int i = 1; i <= n; i++) {
        scanf("%d", &x);
        if(max < x) {
            max = x;
        }
    }
    printf("%d\n", max);
}

// F. Multiplication Table

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= 12; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
}

// Q. Digits

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        int x;
        scanf("%d", &x);
        do {
            printf("%d ", x % 10);
            x = x / 10;
        } while (x != 0);
        printf("\n");
    }

    return 0;
}


       