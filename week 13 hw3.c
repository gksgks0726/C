#include <stdio.h>

int main()
{
    int data = 100;
    int *ptrint;
    ptrint = &data;

    printf("변수명     주소     저장값\n");
    printf("------------------------------\n");
    printf("data      %p        %d\n", &data, data);
    printf("ptrint    %p        %p\n\n\n", &ptrint, ptrint);

    printf("ptrint    %d\n", *ptrint);
    *ptrint = 200;
    printf("ptrint    %d\n", *ptrint);
    printf("data      %d\n", data);


    return 0;

}