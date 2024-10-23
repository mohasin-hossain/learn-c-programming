// F. Reversing


// First appraoch

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


// Second Approach

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0, j = n - 1; i <= j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// G. Palindrome Array

// firsr approach
#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr1[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    int arr2[100000];
    for(int i = 0, j = n - 1; i < n; i++, j--) {
        arr2[i] = arr1[j];
    }

    int isPalindrome = 1;
    for(int i = 0; i < n; i++) {
        if(arr1[i] != arr2[i]) {
            isPalindrome = 0;
        }
    }

    if(isPalindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

// second approach
#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int isPalindrome = 1;
    for(int i = 0, j = n - 1; i <= j; i++, j--) {
        if(arr[i] != arr[j]) {
            isPalindrome = 0;
        }
    }

    if(isPalindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}


// F. Way Too Long Words

#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        char str[101];
        scanf("%s", str);
        int stringSize = strlen(str);

        if(stringSize <= 10) {
            printf("%s\n", str);
         } else {
            char first = str[0];
            char last = str[stringSize - 1]; 
            int middle = stringSize - 2;
            printf("%c%d%c\n", first, middle, last);
         }
    }

    return 0;
}

// Conversion

#include<stdio.h>
#include<string.h>

int main ()
{
    char str[100000];
    scanf("%s", str);

    for(int i = 0; i < strlen(str); i++) {
        if(str[i] == ',') {
            str[i] = ' ';
        }

        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }

    printf("%s", str);

    return 0;
}

// Palindrome

#include<stdio.h>
#include<string.h>

int main()
{
    char str[1001];
    scanf("%s", str);
    int strSize = strlen(str);

    int isPalindrome = 1;
    for(int i = 0, j = strSize - 1; i <= j; i++, j--) {
        if(str[i] != str[j]) {
            isPalindrome = 0;
        }
    }

    if(isPalindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

// Strings

// First appraoch - without built in functions
#include<stdio.h>

int main()
{
    char str1[11];
    char str2[11];
    scanf("%s", str1);
    scanf("%s", str2);

    int str1Len = 0, str2Len = 0;
    for(int i = 0; str1[i] != '\0'; i++) {
        str1Len++;
    }
    for(int i = 0; str2[i] != '\0'; i++) {
        str2Len++;
    }

    char result[str1Len + str2Len + 1];
    for(int i = 0; str1[i] != '\0'; i++) {
        result[i] = str1[i];
    }

    for(int i = 0; str2[i] != '\0'; i++) {
        result[str1Len + i] = str2[i];
    }

    result[str1Len + str2Len] = '\0';

    char temp = str1[0];
    str1[0] = str2[0];
    str2[0] = temp;

    printf("%d %d\n", str1Len, str2Len);
    printf("%s\n", result);
    printf("%s %s\n", str1, str2);

    return 0;
}


// Second approach - without built in functions
#include<stdio.h>

int main()
{
    char str1[11];
    char str2[11];
    scanf("%s", str1);
    scanf("%s", str2);

    int str1Len = 0, str2Len = 0;
    for(int i = 0; str1[i] != '\0'; i++) {
        str1Len++;
    }
    for(int i = 0; str2[i] != '\0'; i++) {
        str2Len++;
    }

    char result[str1Len + str2Len + 1];
    for(int i = 0; i < str1Len; i++) {
        result[i] = str1[i];
    }

    for(int i = 0; i < str2Len; i++) {
        result[str1Len + i] = str2[i];
    }

    result[str1Len + str2Len] = '\0';

    char temp = str1[0];
    str1[0] = str2[0];
    str2[0] = temp;

    printf("%d %d\n", str1Len, str2Len);
    printf("%s\n", result);
    printf("%s %s\n", str1, str2);

    return 0;
}


// Third approach - with built in functions
#include<stdio.h>
#include<string.h>

int main()
{
    char str1[11];
    char str2[11];
    scanf("%s", str1);
    scanf("%s", str2);
    int str1Len = strlen(str1);
    int str2Len = strlen(str2);

    char result[str1Len + str2Len + 1];
    for(int i = 0; i < str1Len; i++) {
        result[i] = str1[i];
    }

    for(int i = 0; i < str2Len; i++) {
        result[strlen(str1) + i] = str2[i];
    }

    result[str1Len + str2Len] = '\0';

    char temp = str1[0];
    str1[0] = str2[0];
    str2[0] = temp;

    printf("%d %d\n", str1Len, str2Len);
    printf("%s\n", result);
    printf("%s %s\n", str1, str2);

    return 0;
}