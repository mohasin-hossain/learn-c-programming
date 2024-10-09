#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Your Given Array is: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Find min and max
    int min = arr[0], max = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        } else if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Min = %d\n", min);
    printf("Max = %d\n", max);
}


// Alternative

#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Your Given Array is: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Find min and max
    int min = INT_MAX, max = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        } else if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Min = %d\n", min);
    printf("Max = %d\n", max);
}