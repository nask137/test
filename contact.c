 #define _CRT_SECURE_NO_WARNINGS  1
#include "contact.h"
 
void menu() {
	printf("*****************************\n");
	printf("******1.����  2. ɾ��   *****\n");
	printf("******3.����  4. �޸�   *****\n");
	printf("******5.չʾ  6. ����   *****\n");
	printf("******0.�˳�           *****\n");
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
	return -1;//�Ҳ���
}
void չʾ(const struct contact* ps) {
	if (ps->size == 0) {
		printf("ͨѶ¼Ϊ�գ�\n");
	}
	else {
		printf("%20s\t%4s\t%20s\t%3s\t%20s\n", "����", "����", "�绰", "�Ա�", "��ַ");
		for (int i = 0; i < ps->size; i++) {
			printf("%20s\t%4d\t%20s\t%3s\t%20s\n", ps->date[i].name, ps->date[i].age, ps->date[i].tele, ps->date[i].sex, ps->date[i].addr);
		}
	}
}
void ����(struct contact* ps) {
	if (ps->size == MAX) {
		printf("ͨѶ¼�������޷�����\n");
	}
	else {
		printf("����������:");
		scanf("%s", ps->date[ps->size].name);
		printf("����������:");
		scanf("%d", &(ps->date[ps->size].age));
		printf("������绰:");
		scanf("%s", ps->date[ps->size].tele);
		printf("�������Ա�:");
		scanf("%s", ps->date[ps->size].sex);
		printf("�������ַ:");
		scanf("%s", ps->date[ps->size].addr);
		ps->size++;
		printf("��ӳɹ���\n");
	}

}
void ɾ��(struct contact *ps) {
	char name[NAME_MAX];
	printf("������Ҫɾ���˵�����:>");
	scanf("%s",name );
	//����Ҫɾ������ϵ�˵�λ��
	//�ҵ��˷����±�
	//�Ҳ�������-1
	int pos = findbyname(ps, name);
	//ɾ��
	if (-1==pos) printf("Ҫɾ�����˲����ڣ�\n");
	else {
		int j = 0;
		for (j =pos; j < ps->size - 1; j++)ps->date[j] = ps->date[j + 1];
		ps->size--;
		printf("ɾ���ɹ���\n");
	}
}
void ����(const struct contact* ps) {
	char name[NAME_MAX];
	printf("����������˵����֣�");
	scanf("%s", name);
	int pos = findbyname(ps, name);
	if (-1 == pos)printf("�����ҵ��˲����ڣ�\n");
	else {
		printf("%20s\t%4s\t%20s\t%3s\t%20s\n", "����", "����", "�绰", "�Ա�", "��ַ");
			printf("%20s\t%4d\t%20s\t%3s\t%20s\n",
				ps->date[pos].name,
				ps->date[pos].age,
				ps->date[pos].tele, 
				ps->date[pos].sex,
				ps->date[pos].addr);
	}

}
void �޸�(struct contact* ps) {
	char name[NAME_MAX];
	printf("������Ҫ�޸��˵����֣�");
	scanf("%s", name);
	int pos = findbyname(ps, name);
	if (-1 == pos)  printf("Ҫ�޸��˲����ڣ�\n");
	else {
		printf("����������:");
		scanf("%s", ps->date[pos].name);
		printf("����������:");
		scanf("%d", &(ps->date[pos].age));
		printf("������绰:");
		scanf("%s", ps->date[pos].tele);
		printf("�������Ա�:");
		scanf("%s", ps->date[pos].sex);
		printf("�������ַ:");
		scanf("%s", ps->date[pos].addr);
		printf("�޸ĳɹ���\n");
	};
}
void ����( struct contact* ps) {
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
