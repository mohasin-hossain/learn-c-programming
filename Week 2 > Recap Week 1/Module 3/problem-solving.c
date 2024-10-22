// Positions in array
#include<stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] <= 10) {
            printf("A[%d] = %d\n", i, arr[i]);
        }
    }

    return 0;
}

// Replace minmax

#include<stdio.h>
#include<limits.h>

int main() 
{
    int n;
    scanf("%d", &n);

    int arr[n];
    int min = INT_MAX, max = INT_MIN, minIdx = 0, maxIdx = 0; 
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(min > arr[i]) {
            min = arr[i];
            minIdx = i;
        }

        if(max < arr[i]) {
            max = arr[i];
            maxIdx = i;
        }
    }

    arr[minIdx] = max;
    arr[maxIdx] = min;

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// lucky Array

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find Minimum
    int min = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    // Count Frequency
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == min) {
            count++;
        }
    }

    // Is the frequency odd or even
    if(count % 2 == 0) {
        printf("Unlucky\n");
    } else {
        printf("Lucky\n");
    }

    return 0;
}

// Age in days

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    // Years
    int years = n / 365;
    n = n % 365; // Remaining days after calculating years

    // Months
    int months = n / 30;
    n = n % 30; // Remaining months after calculating months

    // Days
    int days = n;

    printf("%d years\n", years);
    printf("%d months\n", months);
    printf("%d days\n", days);
   
    return 0;
}

// Frequency Array
#include<stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 1; i <= m; i++) {
        int count = 0;

        for(int j = 0; j < n; j++) {
            if(arr[j] == i) {
                count++;
            }
        }

        printf("%d\n", count);
    }   

    return 0;
}

// Sum Digits

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

   char digits[n + 1];
   scanf("%s", digits);

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += digits[i] - '0';
    }

    printf("%d\n", sum);

    return 0;
}

