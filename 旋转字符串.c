//ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//��������   
void swap(char *arr,int x) {  //��ת�ĺ���  ��ת�ĸ��� 
	int right = 0;
	for (int i = 0; i < x; i++) {
		for (right; right < x; right++) {
			  
			arr[right] = arr[right + x]; //��һ�����ڵ�x��
		}
	}
}	
//���ƺ���
void copy(char *arr,char *str,int x) {
	for (int i = 0; i < x; i++) {
		str[i] = arr[i];
	}
}
//��ת����
void rotate(char *arr, char *str, int x, int n) {   //
	copy(arr, str, x);
	swap(arr, x);
	int j = 0;
	for (int i = n - x; i < n; i++) {
		arr[i] = str[j];
		j++;
	}
}
int main() {
	int k;
	char str[100] ="";
	char arr[] = "ABCDE";
	int n = sizeof(arr) / sizeof(arr[0]) - 1;
	printf("������Ҫ��ת�ַ�����:(С��5)");
	while (1) {
		scanf("%d", &k);
		if (k > 0 && k < 5) {
			break;
		}
	}
	rotate(arr, str, k, n);
	puts(arr);
	
	
	system("pause");
	return 0;
}