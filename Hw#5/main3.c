#include <stdio.h>

int main() {
    int a, b;
    for (int i = 1; i <= 81; i++) {
        a = (i - 1) / 9 + 1;
        b = (i - 1) % 9 + 1;

        // 使用 %2d 和 %-2d 讓數字對齊，乘法式子排成整齊的列
        printf("%2d * %-1d = %2d  ", a, b, a * b);

        if (b == 9) {
            printf("\n"); // 每 9 個數字換行
        }
    }

    return 0;
}
