#include <stdio.h>

int power(int base, int exponent) {
    return exponent == 1 ? base : base * power(base, exponent - 1);
}

int main() {
    int base, exponent;

    printf("請輸入底數: ");
    scanf_s("%d", &base);

    printf("請輸入指數(>= 1): ");
    scanf_s("%d", &exponent);

    printf("%d 的 %d 次方為: %d\n", base, exponent, exponent >= 1 ? power(base, exponent) : 1);

    return 0;
}
