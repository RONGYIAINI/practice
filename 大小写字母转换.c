#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	//定义终止符
	char end = '123';
	while (1) {
		//输入一个字符
		char to_change = getchar();
		//判断该字符是否为小写字母
		if (to_change >= 'a'&&to_change <= 'z') {
			to_change = to_change - 32;//小写字母转换为大写字母
			putchar(to_change);

		}
		//判断是否为大写字母
		else if (to_change >= 'A'&&to_change <= 'Z') {
			to_change = to_change + 32;//大写字母转换为小写字母
			putchar(to_change);
		}
		//输入的如果不是字母就不输出
		else {

		}
		//遇到结束符就退出循环
		if (to_change == end) {
			break;
		}

	}
	system("pause");
	return 0;
}
