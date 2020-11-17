#include <stdio.h>

int main()
{ // 관계연산자 실습

  printf("(4 > 6)         결과값: %d\n", (4 > 6));
  printf("(4 < 6)         결과값: %d\n", (4 < 6));
  printf("('a' <= 'b')    결과값: %d\n", ('a' <= 'b'));
  printf("('Z' <= 'a')    결과값: %d\n", ('Z' <= 'a'));
  printf("(4.27 >= 4.35)  결과값: %d\n", (4.27 >= 4.35));
  printf("(4 == 4.0)      결과값: %d\n", (4 <= 4.0));
  printf("(4 != 4.0)      결과값: %d\n\n\n\n\n", (4 != 4.0));

  

  //논리연산자 실습
  char null = '\0', a = 'a';
  int zero = 0, n = 10;
  double dzero = 0.0, x = 3.56;

  printf("%d ", !zero);
  printf("%d ", zero && x);
  printf("%d\n", dzero || null);
  printf("%d ", n && x);
  printf("%d ", a || null);
  printf("%d\n\n\n", "java" && "C Lang");

  //조건연산자 실습
  int p = 30, q = 20;
  
  printf("최대값:  %d\n", (p > q) ? p : q);
  printf("최소값:  %d\n", (p < q) ? p : q);

  ((p % 2) == 0) ? printf("짝수\n\n") : printf("홀수\n\n");

  //비트연산자 실습
  int k = 65535;

  printf("%5d -> %08x\n", k, k);
  printf("%5d -> %08x\n", 1, 1);
  printf("k & 1 -> %08x\n", k & 1);
  printf("k | 1 -> %08x\n", k | 1);
  printf("k ^ 1 -> %08x\n", k ^ 1);



  return 0;

}