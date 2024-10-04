// Print 1 to N

#include<stdio.h>

int main()
{
    int n = 10;
    for(int i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}

// Print N to 1

#include<stdio.h>

int main()
{
    int n = 10;
    for(int i = n; i >= 1; i--) {
        printf("%d\n", i);
    }
    
    return 0;
}

// Skipping numbers: Printing Even Numbers

#include<stdio.h>

int main()
{
    int n = 100;
    for(int i = 2; i <= n; i += 2) {
        printf("Even: %d\n", i);
    }
    
    return 0;
}

// Skipping numbers: Printing ODD Numbers

#include<stdio.h>

int main()
{
    int n = 100;
    for(int i = 1; i <= n; i += 2) {
        printf("ODD: %d\n", i);
    }
    
    return 0;
}

// Print 1 to N summation

#include<stdio.h>

int main()
{
    int n = 100;
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Total: %d\n", sum);
    return 0;
}

// Checking Odd and even numbers

#include<stdio.h>

int main()
{
    int n = 100;
    for(int i = 1; i <= n; i++) {

       if(i % 2 == 0) printf("Even = %d\n", i);
       else printf("Odd = %d\n", i);

    }

    return 0;
}



// Print characters

#include<stdio.h>

int main()
{
    int n = 10;
    for(char i = 'a'; i <= 'z'; i++) {
        printf("%c\n", i);
    }
    
    return 0;
}

#include<stdio.h>

int main()
{
    int n = 10;
    for(char i = 'a'; i <= 'z'; i++) {
        printf("%d\n", i); // if we want to ASCII values of the characters then we can just add %d here
    }
    
    return 0;
}

#include<stdio.h>

int main()
{
    int n = 10;
    for(char i = 'z'; i >= 'a'; i--) {
        printf("%c\n", i);
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int n = 10;
    for(char i = 'A'; i <= 'Z'; i++) {
        printf("%c\n", i);
    }
    return 0;
}


