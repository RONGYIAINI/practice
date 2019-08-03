//实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//旋转函数  把第k个数开始的n-k个数复制到前n-k个数中
//ABCDE　旋转２－－＞CDEDE　
void swap(char *arr, int x,int n) {  //旋转的函数  旋转的个数 数组长度
	int right = 0;
	
		for (right; right < n - x; right++) {

			arr[right] = arr[right + x]; //第一个等于第x个
		}
	
}
//复制函数
// 把要旋转的函数的前 k个数复制到 空数组中;
void copy(char *arr, char *str, int x) {
	for (int i = 0; i < x; i++) {
		str[i] = arr[i];

	}
	
}
//旋转函数
//把复制的数组  从原数组的倒数第k个数开始复制过去
//原数组旋转后变成 CDECD ,复制的数组为AB, 复制上去后成为旋转数组CDEAB
void rotate(char *arr, char *str, int x, int n) {   //要旋转的数组, 保存的数组,旋转的次数,数组长度
	copy(arr, str, x, n);
	swap(arr, x, n);
	int j = 0;
	for (int i = n - x ; i < n; i++) {
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
