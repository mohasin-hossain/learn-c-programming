#include<stdio.h>

void distribute(int roll, int chocolate) {
    if(roll == 4) {
        return;
    }

    printf("Roll %d, Received 1 Chocolate\n", roll);
    distribute(roll + 1, chocolate - 1);
}

int main()
{
    distribute(1, 3);
    return 0;
}


