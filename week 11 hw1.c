#include <stdio.h>

int main()
{
    int a = 0;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &a);

    if (a >= 90)
        printf("A\n");

    else if (a >= 80)
        printf("B\n");

    else if (a >= 70)
        printf("C\n");

    else if (a >= 70)
        printf("D\n");

    else
        printf("F\n");

    return 0;

}