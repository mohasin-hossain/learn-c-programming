// For Loop
#include<stdio.h>

int main()
{
    for(int i = 0; i < 10; i++) {
        printf("Inside For Loop: %d\n", i);
    }
    return 0;
}


// While Loop
#include<stdio.h>

int main()
{
    int i = 0;
    while (i < 10) {
        printf("Inside While Loop: %d\n", i);
        i++;
    }
    return 0;
}

// Do While Loop

#include<stdio.h>

int main()
{
    int i = 0;
    do {
        printf("Inside Do While Loop: %d\n", i);
        i++;
    } while (i < 10);
    return 0;
}

// Normal Loop

#include<stdio.h>

int main()
{
    for(int i = 0; i < 6; i++) {
        printf("* * * * * *\n");
    }
    return 0;
}

// Now the same thing with nested loop

#include<stdio.h>

int main()
{
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 6; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}