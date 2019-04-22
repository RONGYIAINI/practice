#include<stdio.h>
#include<stdlib.h>

int main() {
	int arr[][3] = { 1,2,3,4,5,6,7,8,9 };
	int i = 0, j = 2;
	int n = 6;

	while (1) {
		if (arr[i][j] == n) {
			printf("找到了\n");
			break;
		}
		if (arr[i][j] < n) {
			i++;
		}
		if (arr[i][j] > n) {
			j--;
		}
		if (i > 2 || j < 0) {
			printf("没找到\n");
			break;
		}
	}
	system("pause");
	return 0;
}