#include<stdio.h>

int main()
{
    char str[20];
    // scanf("%s", str);
    // scanf("%[^\n]s", str);
    fgets(str, sizeof(str), stdin);
    fputs(str, stdout);

    printf("%s", str);

    return 0;
}