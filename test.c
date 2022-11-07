 #define _CRT_SECURE_NO_WARNINGS  1
#include "contact.h"
int main() {
	int input = 0;

	//创建通讯录
	struct contact con[MAX];
	//初始化通讯录
	Initcontact(&con);
	do {
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input) {
		case 1:增加( &con); 
			break;
		case 2:删除(&con);
			break;
		case 3:查找(&con);
			break;
		case 4:修改(&con);
			break;
		case 5:展示(&con);
			break;
		case 6:排序(&con);
			break;
		case 0:printf("退出！\n");
			break;
		default:printf("选择错误！\n");
			break;
		}
	} while (input);
	return 0;
}