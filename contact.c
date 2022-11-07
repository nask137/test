 #define _CRT_SECURE_NO_WARNINGS  1
#include "contact.h"
 
void menu() {
	printf("*****************************\n");
	printf("******1.增加  2. 删除   *****\n");
	printf("******3.查找  4. 修改   *****\n");
	printf("******5.展示  6. 排序   *****\n");
	printf("******0.退出           *****\n");
	printf("*****************************\n");
}
void Initcontact(struct contact* ps) {
	memset(ps->date, 0, sizeof(ps->date));
	ps->size = 0;
}

static int findbyname(const struct contact* ps, char name[NAME_MAX]) {
	int i = 0;
	for (i = 0; i < ps->size; i++) {
		if (0 == strcmp(ps->date[i].name, name)) return i;
	}
	return -1;//找不到
}
void 展示(const struct contact* ps) {
	if (ps->size == 0) {
		printf("通讯录为空！\n");
	}
	else {
		printf("%20s\t%4s\t%20s\t%3s\t%20s\n", "名字", "年龄", "电话", "性别", "地址");
		for (int i = 0; i < ps->size; i++) {
			printf("%20s\t%4d\t%20s\t%3s\t%20s\n", ps->date[i].name, ps->date[i].age, ps->date[i].tele, ps->date[i].sex, ps->date[i].addr);
		}
	}
}
void 增加(struct contact* ps) {
	if (ps->size == MAX) {
		printf("通讯录已满，无法增加\n");
	}
	else {
		printf("请输入名字:");
		scanf("%s", ps->date[ps->size].name);
		printf("请输入年龄:");
		scanf("%d", &(ps->date[ps->size].age));
		printf("请输入电话:");
		scanf("%s", ps->date[ps->size].tele);
		printf("请输入性别:");
		scanf("%s", ps->date[ps->size].sex);
		printf("请输入地址:");
		scanf("%s", ps->date[ps->size].addr);
		ps->size++;
		printf("添加成功！\n");
	}

}
void 删除(struct contact *ps) {
	char name[NAME_MAX];
	printf("请输入要删除人的名字:>");
	scanf("%s",name );
	//查找要删除的联系人的位置
	//找到了返回下标
	//找不到返回-1
	int pos = findbyname(ps, name);
	//删除
	if (-1==pos) printf("要删除的人不存在！\n");
	else {
		int j = 0;
		for (j =pos; j < ps->size - 1; j++)ps->date[j] = ps->date[j + 1];
		ps->size--;
		printf("删除成功！\n");
	}
}
void 查找(const struct contact* ps) {
	char name[NAME_MAX];
	printf("请输入查找人的名字：");
	scanf("%s", name);
	int pos = findbyname(ps, name);
	if (-1 == pos)printf("所查找的人不存在！\n");
	else {
		printf("%20s\t%4s\t%20s\t%3s\t%20s\n", "名字", "年龄", "电话", "性别", "地址");
			printf("%20s\t%4d\t%20s\t%3s\t%20s\n",
				ps->date[pos].name,
				ps->date[pos].age,
				ps->date[pos].tele, 
				ps->date[pos].sex,
				ps->date[pos].addr);
	}

}
void 修改(struct contact* ps) {
	char name[NAME_MAX];
	printf("请输入要修改人的名字：");
	scanf("%s", name);
	int pos = findbyname(ps, name);
	if (-1 == pos)  printf("要修改人不存在！\n");
	else {
		printf("请输入名字:");
		scanf("%s", ps->date[pos].name);
		printf("请输入年龄:");
		scanf("%d", &(ps->date[pos].age));
		printf("请输入电话:");
		scanf("%s", ps->date[pos].tele);
		printf("请输入性别:");
		scanf("%s", ps->date[pos].sex);
		printf("请输入地址:");
		scanf("%s", ps->date[pos].addr);
		printf("修改成功！\n");
	};
}
void 排序( struct contact* ps) {
	for (int j = 0; j < MAX; j++) {
		for (int i = 0; i < MAX - 1; i++) {
			if ((ps->date[i].age )> (ps->date[i+1].age)) {
				int tmp = (ps->date[i].age);
				(ps->date[i].age) = (ps->date[i + 1].age);
				(ps->date[i + 1].age) = tmp;
			}
			
		}
	}
	
}
