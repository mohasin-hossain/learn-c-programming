// Summation

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sum
    long long int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    if (sum < 0) {
        sum = sum * -1;
    }

    printf("%lld", sum);

    return 0;
}

// Searching
#include<stdio.h>

int main()
{
    int n, x;
    
    // Input for number of elements in array
    scanf("%d", &n);

    int arr[n];

    // Input for the array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input for the number to search in the array
    scanf("%d", &x);

    // Finding the first occurrence of x
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            printf("%d\n", i);  // Print the position and exit
            return 0;
        }
    }

    // If x is not found, print -1
    printf("-1\n");

    return 0;
}

// Replacement
#include<stdio.h>

int main()
{
    int n;  // Declare an integer 'n' to store the number of elements in the array

    // Input for the number of elements in the array
    scanf("%d", &n);  // Read the value of 'n'

    int arr[n];  // Declare an integer array 'arr' of size 'n'

    // Input for the array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read each element of the array and store it in 'arr'
    }

    // Loop through the array and replace values based on conditions
    for(int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            arr[i] = 1;  // If the element is positive, replace it with 1
        } else if (arr[i] < 0) {
            arr[i] = 2;  // If the element is negative, replace it with 2
        }
        // If the element is zero, it remains unchanged

        printf("%d ", arr[i]);  // Print the modified element
    }

    return 0;  // End of the program
}


// Positions in Array
#include<stdio.h>

int main()
{
    int n;  // Declare an integer 'n' to store the number of elements in the array
    
    // Input for the number of elements in the array
    scanf("%d", &n);  // Read the value of 'n'

    int arr[n];  // Declare an integer array 'arr' of size 'n'

    // Input for the array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read each element of the array and store it in 'arr'
    }

    // Loop through the array and print elements less than or equal to 10
    for(int i = 0; i < n; i++) {
        if(arr[i] <= 10) {  // Check if the element is less than or equal to 10
            printf("A[%d] = %d\n", i, arr[i]);  // Print the index and value of the element
        }
    }

    return 0;  // End of the program
}


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


// Reversing
#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

// Palindrome Array

// #include<stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int arr[n];
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int reversedArr[n];
//     for(int i = n-1; i >= 0; i--) {
//         reversedArr[i ] = arr[i];
//     }

//     for(int i = 0; i < n; i++) {
//         printf("%d", arr[i]);
//     }

//     return 0;

// }