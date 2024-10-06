#include<stdio.h>

int main()
{
    int marks;
    printf("Please Enter Your Mark: ");
    scanf("%d", &marks);


    if(marks >= 33 && marks <= 100) {
        printf("Passed.\n");

        if(marks >= 80 && marks <= 100) {
            printf("You have got A+ Grade!\n");

            if(marks >= 90) {
                printf("Congratulations. You have got Scholaship for getting 90+ Marks!");
            }
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
    } 
    else if (marks <= 32 && marks >= 0) {
        printf("Failed.!\n");
        printf("You have got F Grade!\n");
    }
    else {
        printf("Invalid Marks!\n");
    }
}