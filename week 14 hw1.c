#include <stdio.h>

#define ROWSIZE 2
#define COLSIZE 5
int main()
{
    int i, j;
    int score[][5] = { {70, 60, 70, 50, 50}, {70, 90, 70, 80, 70} };
    double sum1 = 0, sum2 = 0;
    printf("수학\t\t\t영어\t\t\t수학\t\t\t사회\t\t\t체육\n");

    for (i = 0; i < ROWSIZE; i++){ 
        for (j = 0; j < COLSIZE; j++){
        
        printf("score[%d][%d] = %d\t", i, j, score[i][j]);
        }
        sum1 += score[0][j]; 
        sum2 += score[1][j];
        printf("\n");
    }

    printf("중간고사점수의 합은 %.0lf이고 평균은 %.0lf이다\n", sum1, sum1 / j);
    printf("기말고사점수의 합은 %.0lf이고 평균은 %.0lf이다\n", sum2, sum2 / j);
    
    return 0;

}