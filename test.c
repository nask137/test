 #define _CRT_SECURE_NO_WARNINGS  1
#include "contact.h"
int main() {
	int input = 0;

	//����ͨѶ¼
	struct contact con[MAX];
	//��ʼ��ͨѶ¼
	Initcontact(&con);
	do {
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input) {
		case 1:����( &con); 
			break;
		case 2:ɾ��(&con);
			break;
		case 3:����(&con);
			break;
		case 4:�޸�(&con);
			break;
		case 5:չʾ(&con);
			break;
		case 6:����(&con);
			break;
		case 0:printf("�˳���\n");
			break;
		default:printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}