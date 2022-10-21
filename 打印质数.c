 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int main() {
	int a = 0, b = 0, n = 0, z =1 ;
	scanf("%d", &n);
	for (a = 2; a <= n; a++) {
		for (b = 2; b < a; b++) {
			if (a % b == 0) {
				z = 0; break;
			}


		}if (z == 1) 
			printf("%d\n", a);
		else z = 1; 
				
	}
	return 0;
}