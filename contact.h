#define _CRT_SECURE_NO_WARNINGS  1
#define NAME_MAX 5
#define SEX_MAX  5
#define ADDR_MAX  30
#define MAX  5
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct Peoinfor {
	char name[NAME_MAX];
	int age;
	char tele[12];
	char sex[SEX_MAX];
	char addr[ADDR_MAX];
};
struct contact {
	struct Peoinfor date[MAX];//���һ����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
};
void menu();
void Initcontact(struct contact* ps);
void ����(struct contact* ps);
void չʾ(const struct contact* ps);
void ɾ��(struct contact *ps);
void ����(const struct contact* ps);
void �޸�(struct contact* ps);
void ����( struct contact* ps);