#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    int goc = 1000000;
    int cuoc;
    char DuDoan;
    
    printf("So tien hien co:%d\n", goc);
    srand(time(0));

    int dice1 = (rand() % 6) + 1;
    int dice2 = (rand() % 6) + 1;
    int dice3 = (rand() % 6) + 1;
    printf("Kết quả của 3 con xúc xắc:\n");
    printf("Xúc xắc 1: %d\n", dice1);
    printf("Xúc xắc 2: %d\n", dice2);
    printf("Xúc xắc 3: %d\n", dice3);

    return 0;
}