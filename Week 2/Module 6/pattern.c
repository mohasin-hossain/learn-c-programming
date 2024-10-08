#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

// Answer
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 

#include <stdio.h>

int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
// Answer
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 

#include <stdio.h>

int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

// Answer
// 5 4 3 2 1 
// 4 3 2 1 
// 3 2 1 
// 2 1 
// 1 

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

// Answer
// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1 

#include <stdio.h>

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n - i; j++) 
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

// Answer
//     1 
//    1 2 
//   1 2 3 
//  1 2 3 4 
// 1 2 3 4 5 


#include <stdio.h>

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n - i; j++) 
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

// Answer
//     1
//    12
//   123
//  1234
// 12345
