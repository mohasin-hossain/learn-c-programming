#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original Array Values: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Modifying array values
    arr[0] += 5;
    arr[1] *= 2;
    arr[2] -= 1;
    arr[3] /= 2;

    printf("Modified Array Values: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}