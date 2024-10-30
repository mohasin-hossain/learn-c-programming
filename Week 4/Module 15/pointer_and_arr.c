#include<stdio.h>

int main()
{   
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;
    printf("%d %d\n", &arr[0], p);
    printf("%d %d\n", &arr[0], p + 1);
    printf("%d %d\n", &arr[0], *(p + 1));

    int a = 6;
    int *x = &a;
    printf("%d %d\n", x, x + 1);

    char ab = 'a';
    char *y = &ab;
    printf("%d %d\n", y, y + 1);

    return 0;
}