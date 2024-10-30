// J. Count Letters

#include<stdio.h>
#include<string.h>

int main() 
{
    char str[10000001];
    scanf("%s", str);

    int f[26] = {0};
    int len = strlen(str);

    for(int i = 0; i < len; i++) {
        int index = str[i] - 'a';
        f[index] += 1;
    }

    for(int i = 0; i < 26; i++) {
        if(f[i] > 0) {
            printf("%c : %d\n", 'a' + i, f[i]);
        }
    }

    return 0;
}

// Search in matrix

#include<stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int x;
    scanf("%d", &x);

    int isExist = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(a[i][j] == x) {
                isExist = 1;
            }
        }   
    }

    if(isExist) {
        printf("will not take number");
    } else {
        printf("will take number");
    }

    return 0;
}

// TLE Error with the avobe code
// More optimized solution 


#include<stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int f[100001] = {0};
    int a;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &a);
            f[a] = 1;
        }
    }

    int x;
    scanf("%d", &x);

    if(f[x] == 1) {
        printf("will not take number");
    } else {
        printf("will take number");
    }

    return 0;
}