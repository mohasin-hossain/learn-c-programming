#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int m[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    int sum_primary = 0, sum_secondary = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            // Primary Diagonal
            if(i == j) {
               sum_primary += m[i][j];
            }
            // Secondary Diagonal
            if(i + j == n - 1) {
                sum_secondary += m[i][j];
            }
        }
    }

    int abs_diff = abs(sum_primary - sum_secondary);

    printf("%d", abs_diff);

    return 0;
}