#include<stdio.h>

int main()
{
    int n, m;

    while(scanf("%d %d", &n, &m) !=EOF) {

        if(n > m) {
            int temp = n;
            n = m;
            m = temp;
        }

        if(n <= 0 || m <= 0) {
            break;
        }

        int sum = 0;
        for(int i = n; i <= m; i++) {
            printf("%d ", i);
            sum += i;
        }

        printf("sum =%d\n", sum);
    }

    return 0;
}
