#include<stdio.h>

int main()
{
    int marks;
    printf("Please Enter Your Mark: ");
    scanf("%d", &marks);

    if(marks >= 80 && marks <= 100) {
        printf("You have got A+ Grade!\n");
    }
    else if(marks >= 70 && marks <=79) {
        printf("You have got A Grade!\n");
    }
    else if(marks >= 60 && marks <= 69) {
        printf("You have got A- Grade!\n");
    }
    else if(marks >= 50 && marks <= 59) {
        printf("You have got B Grade!\n");
    }
    else if(marks >= 40 && marks <= 49) {
        printf("You have got C Grade!\n");
    }
    else if(marks >= 33 && marks <= 39) {
        printf("You have got D Grade!\n");
    }
    else if (marks <= 32 && marks >= 0) {
        printf("You have got F Grade!\n");
    }
    else {
        printf("Invalid Marks!\n");
    }
}

// We can also write it like this: 
// But the problem with this code is with "if else if ladder" if one block of code is executed then all the remaining blocks in the if else ladder will not be executed/checked. 
// But if we only use if, then it will check all the if statements
#include<stdio.h>

int main()
{
    int marks;
    printf("Please Enter Your Mark: ");
    scanf("%d", &marks);

    if(marks >= 80 && marks <= 100) {
        printf("You have got A+ Grade!\n");
    }
    if(marks >= 70 && marks <=79) {
        printf("You have got A Grade!\n");
    }
    if(marks >= 60 && marks <= 69) {
        printf("You have got A- Grade!\n");
    }
    if(marks >= 50 && marks <= 59) {
        printf("You have got B Grade!\n");
    }
    if(marks >= 40 && marks <= 49) {
        printf("You have got C Grade!\n");
    }
    if(marks >= 33 && marks <= 39) {
        printf("You have got D Grade!\n");
    }
    if (marks <= 32 && marks >= 0) {
        printf("You have got F Grade!\n");
    }
    if(marks < 0 && marks > 100) {
        printf("Invalid Marks!\n");
    }
}