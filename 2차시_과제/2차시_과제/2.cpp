//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//    int N;
//
//    scanf("%d", &N);
//
//    for (int i = 1; i <= 9; i++) {
//        printf("%d * %d = %d\n", N, i, N * i);
//    }
//
//    return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void hanoi(int n, int start, int sub, int end) {
    if (n == 1) {
        printf("%d %d\n", start, end);
        return;
    }

    hanoi(n - 1, start, end, sub);
    printf("%d %d\n", start, end);
    hanoi(n - 1, sub, start, end);
}

int main() {
    int n;
    long long k = 1;

    scanf("%d", &n);

    
    for (int i = 0; i < n; i++) {
        k = k * 2;
    }

    k = k - 1; // 2^n - 1

    printf("%lld\n", k);

    hanoi(n, 1, 2, 3);

    return 0;
}