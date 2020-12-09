#include <stdio.h>
int doSquare(int n) {
    return (n * n);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d ^ 2 = %d", n, doSquare(n));

    return 0;
}

    