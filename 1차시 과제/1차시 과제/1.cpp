//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//    int A, B;
//
//    scanf("%d %d", &A, &B);
//
//    printf("%d\n", A + B);
//    printf("%d\n", A - B);
//    printf("%d\n", A * B);
//    printf("%d\n", A / B);  // ¸ò
//    printf("%d\n", A % B);  // ³ª¸ÓÁö
//
//    return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//    char ch;
//
//    scanf("%c", &ch);  
//
//    printf("%d", ch);  
//
//    return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    printf("%d\n", (A + B) % C);
    printf("%d\n", ((A % C) + (B % C)) % C);
    printf("%d\n", (A * B) % C);
    printf("%d\n", ((A % C) * (B % C)) % C);

    return 0;
}
