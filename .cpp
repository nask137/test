 #define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
#include <math.h>
int main() {
	
	long b = 0;
	int n = 0;
	int m = 0;
	int conster = 1;
	scanf("%d%d", &n, &m);
	while (conster <= m) {
		
		b+= n * (pow(10,conster)-1 )/ 9;
		conster++;
	}
	printf("%ld\n", b);
	return 0;
}
