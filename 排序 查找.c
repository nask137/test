 #define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
#define M  6
void �����ʼ�� (int* x, int y) {
	printf("����������%d������\n", M);
	for (int i = 0; i < y; i++) {
	scanf("%d",x);
	x++;
	}
}
void ��������(int* x) {
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
void ��������(int* x) {
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
	int a[M] = { 0 }; int mid = 0;//��������
	int high = M - 1; int low = 0;
	int m = 1, z, p, v;
	�����ʼ��(a, M);//�����ʼ��
	printf("��������������0 \n��������������1 \n");//��������
	while (1) {
		
		scanf("%d", &p);
		switch (p) {
		case 0:��������(a); m = 1; v = 0; break;
		case 1:��������(a); m = 1; v = 1; break;
		default:printf("����������������롣\n"); m = 0; break;
		}
		if (m)break;
	}
	printf("���н��Ϊ��\n");//���н����ӡ
	for (int c = 0; c < M; c++) {
		printf(" %d", a[c]);
	}
//��ֵ����
	if (v == 0) {
		printf("\n����ֵΪ��");
		scanf_s("%d", &z);
		mid = (high + low) / 2;
		if (a[mid] == z) {
			printf("�ҵ��ˣ��±�Ϊ%d", mid);
			m = 0;
		}
		else if (a[mid] > z)
		{
			while (mid > low) {
				mid--;
				high = mid;
				mid = (mid + low) / 2;
				if (a[mid] == z) {
					printf("�ҵ��ˣ����±�Ϊ%d", mid);
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
					printf("�ҵ��ˣ����±�Ϊ%d", mid);
					m = 0;
				}
			}

		}
		while (m) {
			printf("�Ҳ�����");
			break;
		}
	}
	if (v == 1) {
		printf("\n����ֵΪ��");
		scanf_s("%d", &z);
		mid = (high + low) / 2;
		if (a[mid] == z) {
			printf("�ҵ��ˣ��±�Ϊ%d", mid);
			m = 0;
		}
		else if (a[mid] > z)
		{
			while (mid > low) {
				mid++;
				low = mid ;
				mid = (high + low) / 2;
				if (a[mid] == z) {
					printf("�ҵ��ˣ����±�Ϊ%d", mid);
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
					printf("�ҵ��ˣ����±�Ϊ%d", mid);
					m = 0;
				}
			}

		}
		while (m) {
			printf("�Ҳ�����");
			break;
		}
	}
	return 0;
}