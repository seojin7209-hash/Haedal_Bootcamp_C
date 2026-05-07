#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


struct point  // 구조체 point
{
	int xPos;  // 구조체 멤버1
	int yPos;  // 구조체 멤버2
};

int main(void)
{
	struct point pos1, pos2;
	double distance;

	printf("point1 pos: ");
	scanf("%d %d", &pos1.xPos, &pos1.yPos);

	printf("point2 pos: ");
	scanf("%d %d", &pos2.xPos, &pos2.yPos);

	// 두 점 간의 거리 계산
	distance = sqrt((double)(pow(pos1.xPos - pos2.xPos, 2) + pow(pos1.yPos - pos2.yPos, 2)));
	printf("distance: %g입니다.\n", distance);
}

