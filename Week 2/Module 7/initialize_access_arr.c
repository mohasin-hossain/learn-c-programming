#include <stdio.h>

int main() {
    // Array of integers with specified size
    int arr1[5] = {1, 2, 3, 4, 5};  // Initializing all elements
    // Array of integers without specifying size
    int arr2[] = {10, 20, 30};      // Size automatically determined (size = 3)

    // Print the elements of arr1
    printf("Array 1: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nArray 2: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}


#include <stdio.h>

int main() {
    int arr[5] = {1, 2};  // Remaining elements will be initialized to 0

    // Print the elements
    printf("Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int arr[5] = {0};  // All elements initialized to 0

    // Print the elements
    printf("Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int arr[5];

    // Initialize array using a loop
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;  // Assigning values based on the index
    }

    // Print the elements
    printf("Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}