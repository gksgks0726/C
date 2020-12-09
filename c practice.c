#include <stdio.h>
int add2(int a, int b); // 함수선언
int findMax2(int, int);
void printMax2(int x, int y);


int main()
{
    int a =3, b= 5, sum;

    sum = add2(a, b);
    printf("a = %d, b = %d, sum = %d\n", a, b, sum);

    
    printf("sum = %d\n", findMax2(a, b));

    printMax2(20, 30);

    return 0;
    
}

int add2(int a, int b)
{

    int sum;

    sum = a + b;
    return (sum);
}
int findMax2(int x, int y)
{
    int max;
    max = x > y ? x : y;

    return (max);
}
void printMax2(int x, int y)
{
    int max;

    max = x > y ? x : y;

    printf("최댓값은 %d", max);

    
}