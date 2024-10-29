#include<stdio.h>

int main()
{
    int a[3][4] = {{2, 3, 5, 2}, {5, 7, 2, 6}, {9, 2, 4, 1}};

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("|| i = %d, j = %d, value = %d || ", i, j, a[i][j]);
        }

        printf("\n");
    }

    return 0;
}