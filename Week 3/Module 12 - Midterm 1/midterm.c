// Do it

# include<stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= k; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

// Book Reading 4

# include<stdio.h>

int main()
{
    int n, t;
    scanf("%d %d", &n, &t);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int fbooks_count = 0, finished_time = 0;

    for(int i = 0; i < n; i++) {
        if(finished_time + arr[i] > t) {
            break;
        } else {
          finished_time += arr[i];
          fbooks_count++;
        }
    }

    printf("%d", fbooks_count);

    return 0;
}

// Price Range


# include<stdio.h>

int main()
{
    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int phones_count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] >= x && arr[i] <= y) {
            phones_count++;
        }
    }

    printf("%d", phones_count);

    return 0;
}

// Jpb Application 1

# include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] < 1) {
            printf("Entry-level candidate\n");
        } else if (arr[i] >= 1 && arr[i] <= 3) {
            printf("Junior candidate\n");
        } else if (arr[i] >= 4 && arr[i] <= 7) {
            printf("Mid-level candidate\n");
        } else {
            printf("Senior candidate\n");
        }
    }

    return 0;
}

// lexic Min Max


#include<stdio.h>
#include<string.h>

int main()
{   
    char str1[1001], str2[1001], str3[1001];
    scanf("%s %s %s", str1, str2, str3);

    // Minimun String
    if(strcmp(str1, str2) < 0 && strcmp(str1, str3) < 0) {
        printf("%s\n", str1);
    } else if (strcmp(str2, str1) < 0 && strcmp(str2, str3) < 0) {
        printf("%s\n", str2);
    } else {
        printf("%s\n", str3);
    }

    // Maxmimum String
    if(strcmp(str1, str2) > 0 && strcmp(str1, str3) > 0) {
        printf("%s\n", str1);
    } else if (strcmp(str2, str1) > 0 && strcmp(str2, str3) > 0) {
        printf("%s\n", str2);
    } else {
        printf("%s\n", str3);
    }

    return 0;
}