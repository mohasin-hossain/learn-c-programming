
#include<stdio.h>

int f[101] = {0};

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);

            f[a[i][j]] = a[i][j];
        }
    }

    int x;
    scanf("%d", &x);

    int isExist = 0;
    for(int i = 0; i < 100; i++) {
        if(f[i] == x) {
            isExist = 1;
        }
    }

    if(isExist) {
        printf("will not take number");
    } else {
        printf("will take number");
    }

    return 0;
}