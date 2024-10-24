// C. Compare
#include<stdio.h>
#include<string.h>

int main ()
{
    char str1[30], str2[30];
    scanf("%s %s", str1, str2);

    int cmp = strcmp(str1, str2);

    if(cmp == 0) {
        printf("%s", str1);
    } else if (cmp > 0) {
        printf("%s", str2);
    } else if (cmp < 0) {
        printf("%s", str1);
    }

    return 0;
}

// E. Count

#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000000];
    scanf("%s", str);

    int len = strlen(str);
    int sum = 0;
    for(int i = 0; i < len; i++) {
        int digit = str[i] - '0';
        sum += digit;
    }

    printf("%d\n", sum);
    return 0;
}

// K. I Love Strings

#include<stdio.h>
#include<string.h>

int main()
{   
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        char str1[100], str2[100];
        scanf("%s %s", str1, str2);

        int str1_len = strlen(str1);
        int str2_len = strlen(str2);

        char result[200];
        int k = 0;

        for(int i = 0; i < str1_len || i < str2_len; i++) {
            if(i < str1_len) {
                result[k] = str1[i];
                k++;
            }

            if(i < str2_len) {
                result[k] = str2[i];
                k++;
            }
        }

        result[k] = '\0';

        printf("%s\n", result);
    }


    return 0;
}

// M. Subsequence String

#include<stdio.h>
#include<string.h>

int main() 
{
    char s[10001];
    scanf("%s", s);
    
    char sub[6] = "hello";

    int len_s = strlen(s);
    int len_sub = strlen(sub);

    int j = 0;
    for(int i = 0; i < len_s; i++) {
        if(s[i] == sub[j]) {
            j++;
        }

        if(j == len_sub) {
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");

    return 0;
}