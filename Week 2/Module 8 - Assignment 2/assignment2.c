// Babul's Vowels
#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Consonant\n");
    }

    return 0;
}

// Zeros and Ones 01

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int zeros = 0, ones = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            zeros++;
        } else if(arr[i] == 1) {
            ones++;
        }
    }

    printf("%d %d", zeros, ones);

    return 0;
}

// Zeros and Ones 02

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int p;
    scanf("%d", &p);
    if(arr[p - 1] == 0) {
        arr[p - 1] = 1;
    } else if (arr[p - 1] == 1) {
        arr[p - 1] = 0;
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


// Pattern Again

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    for(int i = n - 1; i >= 1; i--) {
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for(int k = 1; k <= i; k++) {
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}

// Salami Again

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    for(int i = 0; i < n; i++) {
        int diff = max - arr[i];
        printf("%d ", diff);
    }

    return 0;
}

// More efficient way - reducing one loop


#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    int max = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    for(int i = 0; i < n; i++) {
        int diff = max - arr[i];
        printf("%d ", diff);
    }

    return 0;
}
