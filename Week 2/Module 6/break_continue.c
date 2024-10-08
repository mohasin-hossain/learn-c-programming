#include<stdio.h>

int main()
{
    for(int i = 100; i <= 300; i++) {
        printf("Checking = %d\n", i);
        if(i % 2 == 0 && i % 3 == 0 && i % 5 == 0){
            printf("%d is the number.\n", i);
            break;
        }
    }
}

#include<stdio.h>

int main()
{
    for(int i = 100; i <= 300; i++) {
        if(i % 2 == 0 && i % 3 == 0 && i % 5 == 0){
            printf("%d ", i);
        }
    }
}




