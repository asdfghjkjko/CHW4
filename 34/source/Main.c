#include <stdio.h>

int power(int base, int exponent) {
    return exponent == 1 ? base : base * power(base, exponent - 1);
}

int main() {
    int base, exponent;

    printf("�п�J����: ");
    scanf_s("%d", &base);

    printf("�п�J����(>= 1): ");
    scanf_s("%d", &exponent);

    printf("%d �� %d ���謰: %d\n", base, exponent, exponent >= 1 ? power(base, exponent) : 1);

    return 0;
}
