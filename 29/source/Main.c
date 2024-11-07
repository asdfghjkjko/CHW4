#include <stdio.h>
#include <stdlib.h>


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int lcm(int a, int b) {
    return abs(a * b) / gcd(a, b);
}

int main() {

    int num1, num2;

    printf("�п�J��Ӿ��: ");
    scanf_s("%d %d", &num1, &num2);

    printf("��Ӿ�ƪ��̤p�����Ƭ�: %d\n", lcm(num1, num2));

    return 0;
}