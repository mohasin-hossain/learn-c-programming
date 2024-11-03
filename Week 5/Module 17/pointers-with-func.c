#include<stdio.h>

void swap(int a, int b) {     // Call by value
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10, b = 20;
    swap(a, b);
    printf("%d %d\n", a, b);
    return 0;
}



#include<stdio.h>

void swap(int *a, int *b) {     // Call by Reference
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 10, b = 20;
    swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}