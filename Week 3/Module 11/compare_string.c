#include<stdio.h>
#include<string.h>

int main()
{
    char a[20] = "air";
    char b[20] = "airplane";

    int cmp = strcmp(a, b);

    printf("%d\n", cmp); 

    return 0;
}