 #define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
int main() {
	int a = 1, b = 1, c = 0;
	for ( a = 1; a < 10; a++) {
		for ( b = 1; b <= a; b++) {
			c = a * b;
			printf("%d*%d=%-2d ", a, b, c);


		}
		printf("\n");
	}
	return 0;
}