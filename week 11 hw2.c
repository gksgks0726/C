#include <stdio.h>

int main()
{
    double a = 0, b = 0;
    printf("학점과 석차를 입력하시오: ");
    scanf("%lf %lf", &a, &b);

    if(a >= 3.5 )
    {
        if (b <= 0.05 )
        printf("장학금을 가져가세요.");

        else
        printf("돌아가!");
        
    }
        else
        printf("돌아가!");
        
    return 0;
}