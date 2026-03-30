//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int n;
//	printf("Á¤¼ö ÀÔ·Â :");
//	scanf("%d", &n);
//
//	if (n % 2 != 0)
//		printf("È¦¼ö");
//	else
//		printf("Â¦¼ö");
//}

#include <stdio.h>

int main() {
	int sum = 0;
	for (int i=1; i <= 10; i++)
		sum += i;

	sum = 0;
	int i = 1;
	while (i <= 10) {
		sum += i;
		i++;
	}
	printf("%d", sum);
}