#include<stdio.h>

int main()
{
    char str[] = "Hello World";

    int length = 0;
    while(str[length] != '\0') {
        length++;
    }

    // or with for loop
    // for(int i = 0; str[i] != '\0'; i++) {
    //     length++;
    // }

    printf("%d", length);

    return 0;
}

// with strlen()

#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "Hello World";
    int length = strlen(str);

    printf("%d", length);

    return 0;
}