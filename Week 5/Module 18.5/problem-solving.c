// Add

#include<stdio.h>

int getSum(int x, int y)
{
    return x + y;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int result = getSum(x, y);

    printf("%d\n", result);

    return 0;
}

// Swap

#include<stdio.h>

void swapValue(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int *a = &x, *b = &y;

    swapValue(a, b);

    printf("%d %d\n", x, y);

    return 0;
}

// Print Recursion

#include<stdio.h>

void printFunc(int n)
{
    if (n == 0) return;
    printf("I love Recursion\n");
    printFunc(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    printFunc(n);

    return 0;
}


// B. Print 1 to n

#include<stdio.h>

void printFunc(int x, int n)
{
    if (x > n) return;

    printf("%d\n", x);

    printFunc(x + 1, n);

}

int main()
{
    int n;
    scanf("%d", &n);

    printFunc(1, n);

    return 0;
}

// C. Print n to 1

#include<stdio.h>

void printFunc(int n)
{
    if(n == 0) return;

    if(n == 1) {
        printf("%d", n);
    } else {
        printf("%d ", n);
    }
    
    printFunc(n - 1);
}

int main()
{
    int n; 
    scanf("%d", &n);
    printFunc(n);
    return 0;
}