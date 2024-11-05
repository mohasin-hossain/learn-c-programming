#include<stdio.h>

void printFunc(int n)
{
    if(n == 0) return;
    printf("%d\n", n);
    printFunc(n - 1);
}

int main()
{
    int n; 
    scanf("%d", &n);
    printFunc(n);
    return 0;
}