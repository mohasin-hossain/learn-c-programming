#include<stdio.h>

void fun(int arr[], int n)
{
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("%d", sum);
}

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    fun(a, 10);

    return 0;
}