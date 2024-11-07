#include <stdio.h>
#include <stdlib.h>

void towersOfHanoi(int n, char fromPeg, char toPeg, char auxPeg) {
    if (n == 1) {
        printf("將圓盤 1 從 %c 移到 %c\n", fromPeg, toPeg);
        return;
    }
    towersOfHanoi(n - 1, fromPeg, auxPeg, toPeg);
    printf("將圓盤 %d 從 %c 移到 %c\n", n, fromPeg, toPeg);
    towersOfHanoi(n - 1, auxPeg, toPeg, fromPeg);
}

int main() {
    int n;
    printf("請輸入圓盤數量: ");
    scanf_s("%d", &n);

    towersOfHanoi(n, 'A', 'C', 'B');

    return 0;
}
