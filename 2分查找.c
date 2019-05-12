#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	char arr[] = { 1,2,3,4,5,6,7,8,9,10,12,14,16,17 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int right = 0;
	int left = n - 1;
	
	printf("请输入要查找的数:");
	int a;
	scanf("%d", &a);
	while (1) {
		int mid = (right + left)/2;
		if (a < arr[mid]) {
			left = mid - 1;
		}
		if (a > arr[mid]) {
			right = mid + 1;
		}
		if (a == arr[mid]) {
			printf("找到了!\n");
			printf("arr[%d]=%d", mid, a);
			break;
		}
		if (right > left) {
			printf("没找到!\n");
			break;
		}
	}
	system("pause");
	return 0;
}