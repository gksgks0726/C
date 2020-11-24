#include <stdio.h>

int main()
//20171048 ภฬวั
{
    int a, b;

    for(a = 1; a <= 9; a++)
    {
        for(b = 1; b <= 9; b++)
        {
        printf("%d x %d = %d\n", a, b, a*b);
        }
        printf("\n");

    }
    return 0;

}