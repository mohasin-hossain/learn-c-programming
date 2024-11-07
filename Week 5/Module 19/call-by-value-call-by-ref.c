#include<stdio.h>

void fun(int x, int *y) {
    x = x + 5;
    *y = *y + 5;

    printf("%d %d\n", x, *y);
}

int main()
{
    int a = 10, b = 20;

    fun(a, &b);

    printf("%d %d\n", a, b);

    return 0;
}