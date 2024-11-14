#include <stdlib.h>
#include <stdio.h>

int main() {

	int a[5], temp;
	int swapped; 

	printf("請輸入5個數字：\n");
	for (int i = 0; i < 5; ++i) {
		scanf_s("%d", &a[i]);
	}

	printf("您輸入的數字是：\n");
	for (int i = 0; i < 5; ++i) {
		printf("%d%c", a[i], (i < 4) ? ' ' : '\n');
	}

	for (int i = 0; i < 4; i++) {
		swapped = 0; 

		for (int j = 0; j < 4 - i; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				swapped = 1; 
			}
		}

		if (swapped == 0) {
			break;
		}
	}

	printf("氣泡排序過後：\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
	system("pause");
}
