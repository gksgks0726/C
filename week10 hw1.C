#include <stdio.h>

int main()
{ // ���迬���� �ǽ�

  printf("(4 > 6)         �����: %d\n", (4 > 6));
  printf("(4 < 6)         �����: %d\n", (4 < 6));
  printf("('a' <= 'b')    �����: %d\n", ('a' <= 'b'));
  printf("('Z' <= 'a')    �����: %d\n", ('Z' <= 'a'));
  printf("(4.27 >= 4.35)  �����: %d\n", (4.27 >= 4.35));
  printf("(4 == 4.0)      �����: %d\n", (4 <= 4.0));
  printf("(4 != 4.0)      �����: %d\n\n\n\n\n", (4 != 4.0));

  

  //���������� �ǽ�
  char null = '\0', a = 'a';
  int zero = 0, n = 10;
  double dzero = 0.0, x = 3.56;

  printf("%d ", !zero);
  printf("%d ", zero && x);
  printf("%d\n", dzero || null);
  printf("%d ", n && x);
  printf("%d ", a || null);
  printf("%d\n\n\n", "java" && "C Lang");

  //���ǿ����� �ǽ�
  int p = 30, q = 20;
  
  printf("�ִ밪:  %d\n", (p > q) ? p : q);
  printf("�ּҰ�:  %d\n", (p < q) ? p : q);

  ((p % 2) == 0) ? printf("¦��\n\n") : printf("Ȧ��\n\n") ;

  //��Ʈ������ �ǽ�
  int k = 65535;

  printf("%5d -> %08x\n", k, k);
  printf("%5d -> %08x\n", 1, 1);
  printf("k & 1 -> %08x\n", k & 1);
  printf("k | 1 -> %08x\n", k | 1);
  printf("k ^ 1 -> %08x\n", k ^ 1);



  return 0;

}