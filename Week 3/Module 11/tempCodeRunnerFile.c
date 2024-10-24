#include<stdio.h>
#include<string.h>

int main()
{   
    char str[20] = "HelloWorld";
    int len = strlen(str);

    for(int i = 0, j = len - 1; i <= j; i++, j--) {
        str[i] = str[j];
    }

    printf("%s", str);

    return 0;
}