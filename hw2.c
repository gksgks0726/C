#include <stdio.h>
int main()
{
	
	// ��� ���� �ǽ�
	printf("3 + 4 ��? %d\n", 3 + 4);
	printf("2.5 - 1.3 ��? %f\n", 2.5 - 1.3);
	printf("2.5 * 1.3 ��? %f\n", 2.5 * 1.3);
	printf("10 / 3 ��?%d\n", 10 / 3);
	printf("10.0 / 3.0 ��? %f\n", 10.0 / 3.0);
	printf("10 %% 3 ��? %d\n\n\n\n", 10 % 3);
	
	
	//���� ���� �ǽ�
	
	int a, b, c;
	a = b = c = 5;
	
	printf("a = a + 4 ��°���? %d\n", a = a + 4);
	printf("a = b + c ��°���? %d\n", a = b + c);
	printf("b = %d c = %d\n\n", b += 3, c*=3);
	
	// ���� ���� �ǽ�
	int m = 2, n = 2;
	int res; 
	
	printf("m = %d n = %d\n", ++m, n++);
	// m = 3, n = 3
	res = m++ + --n;
	printf("m = %d n = %d res = %d\n", m, n, res);


	return 0; 
	
	
}
