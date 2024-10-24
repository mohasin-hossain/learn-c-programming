#include<stdio.h>
#include<string.h>

int main()
{   
    char str1[1001], str2[1001], str3[1001];
    scanf("%s %s %s", str1, str2, str3);

    int cmp = strcmp(str1, str2);

    printf("%d", cmp);

    return 0;
}