//实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//交换函数   
void swap(char *arr,int x) {  //旋转的函数  旋转的个数 
	int right = 0;
	for (int i = 0; i < x; i++) {
		for (right; right < x; right++) {
			  
			arr[right] = arr[right + x]; //第一个等于第x个
		}
	}
}	
//复制函数
void copy(char *arr,char *str,int x) {
	for (int i = 0; i < x; i++) {
		str[i] = arr[i];
	}
}
//旋转函数
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
	printf("请输入要旋转字符的数:(小于5)");
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