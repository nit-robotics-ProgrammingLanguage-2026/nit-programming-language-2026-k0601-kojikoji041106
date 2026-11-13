#include <stdio.h>

int main(void)
{
    int n;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n < 0) {
        printf("NG\n");
        return 0;
    }

    long long sum = 0;
    for (long long i = 1; i <= n; i++) {
        sum += i;
    }

    printf("%lld\n", sum);
    return 0;
}
