 #define _CRT_SECURE_NO_WARNINGS  2
#include <stdio.h>
void pai_xu(int* arr, int  sz) {
	int i = 0;
	int j = 0;
	for (i = 0; i < sz-1; i++) {
		for (j = 0; j < sz-i; j++) {
			if (arr[j] <arr[j + 1]) {
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main() {
	int i = 0;
	int arr[] = { 3,6,1,2,4,6,4,3};
	int sz = sizeof(arr) / sizeof(arr[0]);
	pai_xu(arr,sz);
	
	for (i = 0; i < sz ; i++) {
		printf("%d", arr[i]);
	}

	return 0;
}