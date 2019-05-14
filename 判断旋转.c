//判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.

//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA

//AABCD右旋一个字符得到DAABC

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
int rotate(char *arr, char *str, int x, int n) {   //要旋转的数组, 保存的数组,旋转的次数,数组长度
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
	//对s1进行循环旋转,如果第k次旋转后和s2相同, 跳出旋转
	//如果k>n,n为数组长度 跳出循环
	while (1) {
		if (strcmp(s1, s2) == 0) {
			printf("s1与s2相同\n");
			break;
		}
		copy(s1, p2, 5);
		if (k > n) { 
			printf("s2不是s1旋转后得到的\n");
			break;
		}
		rotate(p2, p, k, n);
		if (strcmp(p2,s2) == 0) {
			printf("s1旋转%d次后得到s2\n", k);
			break;
		}
		
		++k;
	}
	
	system("pause");
	return 0;
}