 #define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
#include<string.h>
#include <math.h>
#define LEN  256
/*int main() {
	const char1[] = { "abcd" };
	const char2[] = { "abcd" };
	char* p1 = "abcd";
	char* p2 = "abcd";
	if (char1 == char2)printf("hehe");
	printf("%p     %p", &p1, &p2);
	return 0;
}*/
/*int main() {
	char* p = "abcdef";
	char* p1 = "de";
	char*str=strstr(p, p1);
	if (str == NULL)
		printf("不存在子串！\n");
	else printf("存在子串，其地址为%p\n",str);
	printf("%s", str);
	return 0;
}*/
/*int fun() {
	static int c = 0;
	c++;
	return c;
}
int main(int argc,char*argv[]) {
	int x=0, i, j;
	for (i = 1; i < argc; i++) 
		for (j = 0; argv[i][j] != '\0'; j++)
			fun();
		printf("%d\n", x * argc);
	return 0;
}*/
void main() {
	char str[LEN], b[20], * ptr1, * ptrb;
	int n = 0, j, a[50];
	printf("please inter the strings: \n");
	gets(str);
	ptr1 = str;
	while (*ptr1 != '\0') {
		ptrb = b;
		for (j = 0; *ptr1 >= '0' && *ptr1 <= '9'; ptr1++,ptrb++,j++)
			*ptrb = *ptr1;
		if (j) {
			*ptrb = '\0';
			*(a + n) = atoi(b);
			n++;
		}
		if (*ptr1 != '\0')ptr1++;
		}
	printf("Result:\n");
	for (j = 0; j < n; j++) {
		printf("%10d\n", *(a + j));
	}

}
