// Sum of an array with recursion

// first appraoch

#include<stdio.h>

int a[100000], sum;

void goToIndex(int i, int n)
{
    if (i == n) {
        return;
    }

    sum += a[i];

    goToIndex(i + 1, n);
}


int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    sum = 0;

    goToIndex(0, n);

    printf("%d", sum);

    return 0;
}

// second appraoch

#include<stdio.h>

int a[100000];

int getSum(int i, int n) 
{
    if (i == n) {
        return 0;
    }

    return a[i] + getSum(i + 1, n);

}

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int result = getSum(0, n);
    printf("%d\n", result);

    return 0;
}