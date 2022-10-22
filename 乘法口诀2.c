 #define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
int main() {
	int a = 1, b = 1, c = 0, m = 1;
	for (a = 1; a < 10; a++) {
	
		for (b = m; b < 10; b++) {
			c = a * b;
			printf("%d*%d=%2d  ", a, b, c);
		}m++;
		printf("\n");
		int n = 1;
		do {
			
			printf("        ");
			n++;
		} while (n < m);
	}
	return 0;
}
