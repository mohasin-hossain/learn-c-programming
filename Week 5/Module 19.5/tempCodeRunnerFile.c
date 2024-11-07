

#include <stdio.h>

int findLog(long long n)
{
    if (n == 0) {
        return 0;
    }
    return 1 + findLog(n / 2);
}

int main()
{
    long long n;
    scanf("%lld", &n);

    printf("%d\n", findLog(n));

    return 0;
}