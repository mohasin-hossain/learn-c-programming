#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int *x = &a, *y = &b;
    int diff = (*x - *y) * -1;

    printf("%d", diff);   

    return 0;
}