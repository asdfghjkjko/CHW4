#include <stdio.h>
#include <stdlib.h>

void towersOfHanoi(int n, char fromPeg, char toPeg, char auxPeg) {
    if (n == 1) {
        printf("�N��L 1 �q %c ���� %c\n", fromPeg, toPeg);
        return;
    }
    towersOfHanoi(n - 1, fromPeg, auxPeg, toPeg);
    printf("�N��L %d �q %c ���� %c\n", n, fromPeg, toPeg);
    towersOfHanoi(n - 1, auxPeg, toPeg, fromPeg);
}

int main() {
    int n;
    printf("�п�J��L�ƶq: ");
    scanf_s("%d", &n);

    towersOfHanoi(n, 'A', 'C', 'B');

    return 0;
}
