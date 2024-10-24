#include<stdio.h>
#include<string.h>

int main()
{
    char a[20] = "Hello ";
    char b[20] = "World";

    int len_a = strlen(a);
    int len_b = strlen(b);
    int total_len = len_a + len_b;

    for(int i = len_a, j = 0; i < total_len; i++, j++) {
        a[i] = b[j];
    }

    a[total_len] = '\0';

    printf("%s\n%s", a, b);

    return 0;
}


// With built in functions

#include<stdio.h>
#include<string.h>

int main()
{
    char a[20] = "Hello ";
    char b[20] = "World";

    strcat(a, b);

    printf("%s\n%s", a, b);

    return 0;
}