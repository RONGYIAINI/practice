//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.

//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA

//AABCD����һ���ַ��õ�DAABC

#include<stdio.h>
#include<stdlib.h>
//��ת����  �ѵ�k������ʼ��n-k�������Ƶ�ǰn-k������
//ABCDE����ת��������CDEDE��
void swap(char *arr, int x,int n) {  //��ת�ĺ���  ��ת�ĸ��� ���鳤��
	int right = 0;
	
		for (right; right < n - x; right++) {

			arr[right] = arr[right + x]; //��һ�����ڵ�x��
		}
	
}
//���ƺ���
// ��Ҫ��ת�ĺ�����ǰ k�������Ƶ� ��������;
void copy(char *arr, char *str, int x) {
	for (int i = 0; i < x; i++) {
		str[i] = arr[i];

	}
	
}
//��ת����
//�Ѹ��Ƶ�����  ��ԭ����ĵ�����k������ʼ���ƹ�ȥ
//ԭ������ת���� CDECD ,���Ƶ�����ΪAB, ������ȥ���Ϊ��ת����CDEAB
int rotate(char *arr, char *str, int x, int n) {   //Ҫ��ת������, ���������,��ת�Ĵ���,���鳤��
	copy(arr, str, x, n);
	swap(arr, x, n);
	int j = 0;
	for (int i = n - x ; i < n; i++) {
		arr[i] = str[j];
		j++;
	}
	
}
int main() {
	char s1[] = "AABCD";
	char s2[] = "ABCDA";
	int n = sizeof(s1) / sizeof(s1[0]) - 1;
	char p[100] = "";
	char p2[100] = "";
	int k = 1;
	//��s1����ѭ����ת,�����k����ת���s2��ͬ, ������ת
	//���k>n,nΪ���鳤�� ����ѭ��
	while (1) {
		if (strcmp(s1, s2) == 0) {
			printf("s1��s2��ͬ\n");
			break;
		}
		copy(s1, p2, 5);
		if (k > n) { 
			printf("s2����s1��ת��õ���\n");
			break;
		}
		rotate(p2, p, k, n);
		if (strcmp(p2,s2) == 0) {
			printf("s1��ת%d�κ�õ�s2\n", k);
			break;
		}
		
		++k;
	}
	
	system("pause");
	return 0;
}