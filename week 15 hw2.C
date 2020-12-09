#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{   
    srand((long)time(NULL));

    int i;
    printf("0 ~ %d 사이의 난수 100개\n", 1);
    for (i = 0; i < 101; i++)
        printf("%d ", (rand() % 2));
        printf("\n");

        return 0;
}