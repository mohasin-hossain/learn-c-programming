
// Lowest number
#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int lowestNum = arr[0], numPosition = 1;
    for (int i = 0; i < n; i++) {
        if(arr[i] < lowestNum) {
            lowestNum = arr[i];
            numPosition = i + 1;
        }
    }

    printf("%d %d\n", lowestNum, numPosition);

    return 0;
}