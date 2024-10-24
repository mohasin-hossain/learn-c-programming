
#include<stdio.h>
#include<string.h>

int main() 
{
    char s[10000];
    scanf("%s", s);
    
    char sub[6] = "hello";

    int len_s = strlen(s);
    int len_sub = strlen(sub);

    int sub_count = 0, current_position = 0;
    for(int i = 0; i < len_sub; i++) {
        for(int j = 0; j < len_s; j++) {
            if (j == 0) {
                if(s[i] == sub[j]) {
                    sub_count++;
                    current_position = j;
                }
            } else {
                    if(s[i] == sub[j] && j > current_position) {
                    sub_count++;
                    current_position = j;
                }
            }
        }
    }

    if(sub_count == len_sub) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}