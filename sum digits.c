#include <stdio.h>

int main() {
    int n,sum = 0;
    char s[1000000];
    scanf("%d", &n);
    scanf("%s", s);


    for (int i = 0; i < n; i++) {
        sum=sum+s[i];
         sum=sum-'0';
    }
    printf("%d",sum);
    return 0;
}

