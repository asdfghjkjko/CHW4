#include <stdlib.h>
#include <stdio.h>

int main() {

	int a[5], temp;
	int swapped; 

	printf("�п�J5�ӼƦr�G\n");
	for (int i = 0; i < 5; ++i) {
		scanf_s("%d", &a[i]);
	}

	printf("�z��J���Ʀr�O�G\n");
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

	printf("��w�ƧǹL��G\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
	system("pause");
}
