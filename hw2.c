#include <stdio.h>
int main()
{
	
	// 산술 연산 실습
	printf("3 + 4 는? %d\n", 3 + 4);
	printf("2.5 - 1.3 는? %f\n", 2.5 - 1.3);
	printf("2.5 * 1.3 는? %f\n", 2.5 * 1.3);
	printf("10 / 3 는?%d\n", 10 / 3);
	printf("10.0 / 3.0 는? %f\n", 10.0 / 3.0);
	printf("10 %% 3 는? %d\n\n\n\n", 10 % 3);
	
	
	//대입 연산 실습
	
	int a, b, c;
	a = b = c = 5;
	
	printf("a = a + 4 출력값은? %d\n", a = a + 4);
	printf("a = b + c 출력값은? %d\n", a = b + c);
	printf("b = %d c = %d\n\n", b += 3, c*=3);
	
	// 증감 연산 실습
	int m = 2, n = 2;
	int res; 
	
	printf("m = %d n = %d\n", ++m, n++);
	// m = 3, n = 3
	res = m++ + --n;
	printf("m = %d n = %d res = %d\n", m, n, res);


	return 0; 
	
	
}
