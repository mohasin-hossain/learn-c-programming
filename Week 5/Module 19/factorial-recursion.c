#include <stdio.h>

long long factorial(int n)
{
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    long long result = factorial(n);
    printf("%lld\n", result);

    return 0;
}