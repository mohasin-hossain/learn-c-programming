// Frequency Array problem 


// Solution with loop
#include<stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(int i = 1; i <= m; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(i == a[j]) {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}

// It will give a TLE error

// Now let's try it with Frequency Array
#include<stdio.h>

int f[100005];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n + 5];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);

         f[a[i]] += 1;
    }

    for(int i = 1; i <= m; i++) {
        printf("%d\n", f[i]);
    }

    return 0;
}