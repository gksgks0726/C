#include <stdio.h>

int main()
{
    double a = 0, b = 0;
    printf("������ ������ �Է��Ͻÿ�: ");
    scanf("%lf %lf", &a, &b);

    if(a >= 3.5 )
    {
        if (b <= 0.05 )
        printf("���б��� ����������.");

        else
        printf("���ư�!");
        
    }
        else
        printf("���ư�!");
        
    return 0;
}