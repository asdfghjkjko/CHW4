#include <stdio.h>
#include <limits.h>

unsigned long long int fibonacci(unsigned int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    unsigned long long int a = 0, b = 1, fib = 0;
    for (unsigned int i = 2; i <= n; i++) {

        if (b > ULLONG_MAX - a) {
            printf("�W�X�d�� Fibonacci �Ʀ�m: %u\n", i);
            return 0;
        }
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}



int main() {
    for (unsigned int i = 0;; i++) {
        unsigned long long int result = fibonacci(i);
        if (result == 0 && i > 1) {
            printf("Fibonacci(%u) �W�L�F�d��A�����p��C\n", i);
            break;
        }
        printf("Fibonacci(%u) = %llu\n", i, result);
    }
    return 0;
}
