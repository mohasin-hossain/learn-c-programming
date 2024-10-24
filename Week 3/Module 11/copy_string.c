// With loop iteration

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[10] = "abcdef";
    char str2[10];

    int str1Len = strlen(str1);

    for(int i = 0; i < str1Len; i++){
        str2[i] = str1[i];
    }

    str2[str1Len] = '\0';
    
    printf("%s %s", str1, str2);

    return 0;
}

// With built-in functions

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[10] = "abcdef";
    char str2[10];

    // strcpy(destination, source);
    strcpy(str2, str1);
    
    printf("%s %s", str1, str2);

    return 0;
}


#include<stdio.h>
#include<string.h>

int main()
{
    char str1[10] = "abcdef";
    char str2[10];

    // after declaring a string arrray we cannn't assign value to it in later lines, in such case we can use the strcpy function

    strcpy(str2, "Welcome");
    
    printf("%s %s", str1, str2);

    return 0;
}