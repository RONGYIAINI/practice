#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	//������ֹ��
	char end = '123';
	while (1) {
		//����һ���ַ�
		char to_change = getchar();
		//�жϸ��ַ��Ƿ�ΪСд��ĸ
		if (to_change >= 'a'&&to_change <= 'z') {
			to_change = to_change - 32;//Сд��ĸת��Ϊ��д��ĸ
			putchar(to_change);

		}
		//�ж��Ƿ�Ϊ��д��ĸ
		else if (to_change >= 'A'&&to_change <= 'Z') {
			to_change = to_change + 32;//��д��ĸת��ΪСд��ĸ
			putchar(to_change);
		}
		//��������������ĸ�Ͳ����
		else {

		}
		//�������������˳�ѭ��
		if (to_change == end) {
			break;
		}

	}
	system("pause");
	return 0;
}
