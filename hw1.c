#include <stdio.h>

int main()
{
    
     int a; //0���� �ʱ�ȭ ���ص� ��.

     printf("����");
     scanf("%d", &a);
     printf("�������: %d\n\n", a);

     double b = 0.0;

     printf("�Ǽ�");
     scanf(" %lf", &b); // �Ǽ���¿��� lf ����ϱ�
     printf("�Ǽ����: %f\n\n", b);

     char ch1, ch2, str[20];
     printf("����1 ");
     scanf(" %c", &ch1);
     printf("����2 ");
     scanf(" %c", &ch2);
     

     printf("�Է¹���: %c %c\n\n", ch1, ch2);

     printf("���ڿ� ");
     scanf("%s", str);
     printf("���ڿ�: %s", str);

     return 0;
     
}