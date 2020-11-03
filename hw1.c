#include <stdio.h>

int main()
{
    
     int a; //0으로 초기화 안해도 됨.

     printf("정수");
     scanf("%d", &a);
     printf("정수출력: %d\n\n", a);

     double b = 0.0;

     printf("실수");
     scanf(" %lf", &b); // 실수출력에는 lf 기억하기
     printf("실수출력: %f\n\n", b);

     char ch1, ch2, str[20];
     printf("문자1 ");
     scanf(" %c", &ch1);
     printf("문자2 ");
     scanf(" %c", &ch2);
     

     printf("입력문자: %c %c\n\n", ch1, ch2);

     printf("문자열 ");
     scanf("%s", str);
     printf("문자열: %s", str);

     return 0;
     
}