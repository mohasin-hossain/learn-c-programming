#include<stdio.h>
#include<stdbool.h>

int main()
{
    int tourDays = 2;

    if(tourDays == 2) {
        bool isBoatAvailable = false;
        if(isBoatAvailable) {
            printf("Go to Tangur Haor");
        } else {
            printf("Roam around!");
        }
    } 
    else if(tourDays == 4) {
        bool isShipAvailable = true;
        if(isShipAvailable) {
            printf("Go to Saint Martin");
        } else {
            printf("Roam Around!");
        }
    }
    else {
        printf("No plan!");
    }
}