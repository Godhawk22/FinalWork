#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include < math.h >
#include <time.h>

void vvod(int *array, int *z) {
	for (array; array <= z; array++) {
		*array = -100 + rand() % (100 + 100);
		if (*array == 0) {
			*array = *array + (-100 + rand() % (100 + 100));
		}
	}
}

void vovod(int x, int y, int* array) {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			printf("numbers[%d][%d] = %d \n", i, j, *array);
			array++;
		}
	}

}

int proverka(int* array, int* z) {
	int k = 0;
	for (array; array <= z; array++) {
		if (array == z) {
			break;
		}
		if ((*array) * (*(array + 1)) < 0) {
			k = k + 1;
		}
	}
	return k;
}

void prv(int x) {
	printf("Знак меняется %d раз\n", x);
}


int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	const int strochka = 4;
	const int stolb = 3;
	int M[strochka][stolb];
	int* ptr = M[0];
	int* last = M[0] + strochka * stolb-1;
	vvod( ptr, last);
	vovod(strochka, stolb, ptr);
	prv(proverka(ptr, last));
}