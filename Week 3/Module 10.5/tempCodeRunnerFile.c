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

    char result[str1Len + str2Len];
    for(int i = 0; i < str1Len; i++) {
        result[i] = str1[i];
    }

    for(int i = 0; i < str2Len; i++) {
        result[str1Len + i] = str2[i];
    }

    char temp = str1[0];
    str1[0] = str2[0];
    str2[0] = temp;

    printf("%d %d\n", str1Len, str2Len);
    printf("%s\n", result);
    printf("%s %s\n", str1, str2);

    return 0;
}