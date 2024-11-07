// Shift Zeros

#include <stdio.h>

void shiftZeros(int a[], int n) 
{
    int index = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] != 0) {
            a[index] = a[i];
            index++;
        }
    }

    while(index < n) {
        a[index] = 0;
        index++;
    }
}

int main()
{   
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    shiftZeros(a, n);

    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

// Max and Min

#include <stdio.h>

void findMaxMin(int a[], int n) 
{
    int max = a[0], min = a[0];
    for(int i = 0; i < n; i++) {
        if(a[i] < min) {
            min = a[i];
        }
        if(a[i] > max) {
            max = a[i];
        }
    }

    printf("%d %d\n", min, max);
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    findMaxMin(a, n);

    return 0;
}

// Max Number

#include <stdio.h>

int findMax(int a[], int i, int n, int max)
{
    if (i == n) {
        return max;
    }

    if (a[i] > max) {
        max = a[i];
    }

    return findMax(a, i + 1, n, max);
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max = a[0];

    int result = findMax(a, 0, n, max);
    
    printf("%d\n", result);

    return 0;
}

// Count Vowels

#include <stdio.h>
#include <string.h>

int checkVowel(char c)
{
    c = tolower(c);
    if(c == 'a' || c ==  'e' || c ==  'i' || c ==  'o' || c ==  'u' ) {
        return 1;
    }

    return 0;
}

int countVowels(char str[], int i, int len, int count)
{
    if(i == len) {
        return count;
    }

    if(checkVowel(str[i])) {
        count++;
    }

    return countVowels(str, i + 1, len, count);
}

int main()
{
    char str[201];
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    int count = 0;

    int result = countVowels(str, 0, len, count);
    printf("%d\n", result);

    return 0;
}


// Log2

#include <stdio.h>

int findLog(long long n)
{
    if (n == 1) {
        return 0;
    }
    return 1 + findLog(n / 2);
}

int main()
{
    long long n;
    scanf("%lld", &n);

    printf("%d\n", findLog(n));

    return 0;
}