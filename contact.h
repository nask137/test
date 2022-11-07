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
	struct Peoinfor date[MAX];//存放一个信息
	int size;//记录当前已经有的元素个数
};
void menu();
void Initcontact(struct contact* ps);
void 增加(struct contact* ps);
void 展示(const struct contact* ps);
void 删除(struct contact *ps);
void 查找(const struct contact* ps);
void 修改(struct contact* ps);
void 排序( struct contact* ps);