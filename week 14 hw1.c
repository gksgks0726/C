#include <stdio.h>

#define ROWSIZE 2
#define COLSIZE 5
int main()
{
    int i, j;
    int score[][5] = { {70, 60, 70, 50, 50}, {70, 90, 70, 80, 70} };
    double sum1 = 0, sum2 = 0;
    printf("����\t\t\t����\t\t\t����\t\t\t��ȸ\t\t\tü��\n");

    for (i = 0; i < ROWSIZE; i++){ 
        for (j = 0; j < COLSIZE; j++){
        
        printf("score[%d][%d] = %d\t", i, j, score[i][j]);
        }
        sum1 += score[0][j]; 
        sum2 += score[1][j];
        printf("\n");
    }

    printf("�߰���������� ���� %.0lf�̰� ����� %.0lf�̴�\n", sum1, sum1 / j);
    printf("�⸻��������� ���� %.0lf�̰� ����� %.0lf�̴�\n", sum2, sum2 / j);
    
    return 0;

}