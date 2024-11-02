// Unit Matrix

#include<stdio.h> 

int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int isUnit = 1, element = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) {
                if(a[i][j] != element) {
                    isUnit = 0;
                    break;
                }
            } else {
                if(a[i][j] != 0) {
                    isUnit = 0;
                    break;
                }
            }
        }

        if(isUnit == 0) {
            break;
        }
    }

    if(isUnit == 1) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}

// Count in Matrix

#include<stdio.h>

int main()
{
    int n, m, x;
    scanf("%d %d %d", &n, &m, &x);

    int a[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int b[x];
    for(int i = 0; i < x; i++) {
        scanf("%d", &b[i]);
    }

    int f[10001] = {0};

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            f[a[i][j]] += 1;
        }
    }

   for(int i = 0; i < x; i++) {
    printf("%d\n", f[b[i]]);
   }

    return 0;
}


#include<stdio.h>

int main()
{
    int n, m, x;
    scanf("%d %d %d", &n, &m, &x);

    int f[10001] = {0};

    int a[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
            f[a[i][j]] += 1;
        }
    }

    int b[x];
    for(int i = 0; i < x; i++) {
        scanf("%d", &b[i]);
    }

   for(int i = 0; i < x; i++) {
    printf("%d\n", f[b[i]]);
   }

    return 0;
}


// No Repeatation

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int f[100001] = {0};

    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        f[a[i]] += 1;
    }

    int uniqueCount = 0;
    for(int i = 0; i <= 100000; i++) {
        if(f[i] == 1) {
            uniqueCount++;
        }
    }

    printf("%d\n", uniqueCount);

    return 0;
}



#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int f[100001] = {0};

    for(int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);

        f[num] += 1;
    }

    int uniqueCount = 0;
    for(int i = 1; i <= 100000; i++) {
        if(f[i] == 1) {
            uniqueCount++;
        }
    }

    printf("%d\n", uniqueCount);

    return 0;
}

// Dynamic Array

#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(1 * sizeof(int));

    for(int i = 0; i < n; i++) {
        arr = (int *)realloc(arr, (i + 1) * sizeof(int));
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}

// Difference 16

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int *x = &a, *y = &b;
    int diff = abs(*x - *y);

    printf("%d", diff);   

    return 0;
}