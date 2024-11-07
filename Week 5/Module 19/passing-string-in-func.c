#include <stdio.h>
#include <string.h>
#include <ctype.h>

void length(char x[])
{
    int len = strlen(x);
    printf("%d\n", len);
}

void makeFirstCharUpper(char x[])
{
    x[0] = toupper(x[0]);
    printf("%s\n", x);
}

int main()
{   
    char a[20] = "programming";

    length(a);
    makeFirstCharUpper(a);

    return 0;
}