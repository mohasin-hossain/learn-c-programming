
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *A = arr;
    for(int i = 0; i < n; i++) {
        
        if (arr[i] < 0) {
            *A = 2;
        } else if (arr[i] > 0) {
            *A = 1;
        }

        printf("%d ", *A);
        
        A++;
    } 

    return 0;
}