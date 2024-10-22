#include<stdio.h>

int main()
{
    char str[] = "Bangladesh \nis a \"Beautiful\" \tCoun\0try";
    fputs(str, stdout);
}