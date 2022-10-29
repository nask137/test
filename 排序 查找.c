 #define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
#define M  6
void 数组初始化 (int* x, int y) {
	printf("请依次输入%d个数字\n", M);
	for (int i = 0; i < y; i++) {
	scanf("%d",x);
	x++;
	}
}
void 升序排列(int* x) {
	int* m = x;
	for (int j = 0; j < M; j++) {
		x = m;
		for (int i = 0; i < M - 1; i++) {
			if (*x > *(x + 1)) {
				int tmp = *x;
				*x = *(x + 1);
				*(x + 1) = tmp;
			}
			x++;
		}
	}
}
void 降序排列(int* x) {
	int* m = x;
	for (int j = 0; j < M; j++) {
		x = m;
		for (int i = 0; i < M - 1; i++) {
			if (*x < *(x+1)) {
				int tmp = *x;
				*x = *(x+1);
				*(x+1) = tmp;
			}
			x++;
		}
	}
}
int main() {
	int a[M] = { 0 }; int mid = 0;//变量声明
	int high = M - 1; int low = 0;
	int m = 1, z, p, v;
	数组初始化(a, M);//数组初始化
	printf("升序排列请输入0 \n降序排列请输入1 \n");//数组排列
	while (1) {
		
		scanf("%d", &p);
		switch (p) {
		case 0:升序排列(a); m = 1; v = 0; break;
		case 1:降序排列(a); m = 1; v = 1; break;
		default:printf("输入错误！请重新输入。\n"); m = 0; break;
		}
		if (m)break;
	}
	printf("排列结果为：\n");//排列结果打印
	for (int c = 0; c < M; c++) {
		printf(" %d", a[c]);
	}
//数值查找
	if (v == 0) {
		printf("\n查找值为：");
		scanf_s("%d", &z);
		mid = (high + low) / 2;
		if (a[mid] == z) {
			printf("找到了！下标为%d", mid);
			m = 0;
		}
		else if (a[mid] > z)
		{
			while (mid > low) {
				mid--;
				high = mid;
				mid = (mid + low) / 2;
				if (a[mid] == z) {
					printf("找到了！，下标为%d", mid);
					m = 0;
				}
			}

		}
		else if (a[mid] < z)
		{
			while (mid < high){
				mid++;
			low = mid ;
				mid = (mid + high) / 2;
				if (a[mid] == z) {
					printf("找到了！，下标为%d", mid);
					m = 0;
				}
			}

		}
		while (m) {
			printf("找不到！");
			break;
		}
	}
	if (v == 1) {
		printf("\n查找值为：");
		scanf_s("%d", &z);
		mid = (high + low) / 2;
		if (a[mid] == z) {
			printf("找到了！下标为%d", mid);
			m = 0;
		}
		else if (a[mid] > z)
		{
			while (mid > low) {
				mid++;
				low = mid ;
				mid = (high + low) / 2;
				if (a[mid] == z) {
					printf("找到了！，下标为%d", mid);
					m = 0;
				}
			}

		}
		else if (a[mid] < z)
		{
			while (mid < high)
			{
				mid--;
				high = mid ;
				mid = (low + high) / 2;
				if (a[mid] == z) {
					printf("找到了！，下标为%d", mid);
					m = 0;
				}
			}

		}
		while (m) {
			printf("找不到！");
			break;
		}
	}
	return 0;
}