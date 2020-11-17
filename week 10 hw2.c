#include <stdio.h>

int main()
{
    //내림 올림 형변환
    int a = 3.6;
    double d =3;
    printf("20171048 이한");

    printf("%5d %5.1f ", a, d);
    printf("%5.1f\n", 1 + 1.5);

    printf("%5d ", 10 / 4);
    printf("%5.1f ", (double)10 / 4);
    printf("%5.1f\n ", (double)(10 / 4));

    printf("%5d ", (int)(3.4 + 7.8));
    printf("%5d ", (int)3.4 + (int)7.8);
    printf("%5.1f ", (int)3.4 + 7.8);
    printf("%5.1f\n\n ", 3.4 + (int)7.8);

    
    

    double x = 3.3, y = 4.7;
    int b = 6;

    a = 4;

    printf("%d ", a + b > y && x < y);
    printf("%d ", a++ - --b * 2);
    printf("%f ", a > b ? x + 1 : y * 2);
    printf("%f ", x += 3 && y + 2);
    printf("%f\n", (x = x + 1, y = y + 1));    




    return 0;

}