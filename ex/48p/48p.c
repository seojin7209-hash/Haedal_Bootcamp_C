#include <stdio.h>

// typedef를 이용한 구조체 이름 정의
typedef struct
{
    int xpos;
    int ypos;
} Point;


int main(void)
{
    Point pos = { 10, 20 }; // sturct 안 써도 편하게 변수 선언 가능!

    printf("%d %d\n", pos.xpos, pos.ypos);
}