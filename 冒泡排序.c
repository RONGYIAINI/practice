#include<stdio.h>
#include<stdlib.h>
int main() {
	char str[] = { 4,5,3,6,8,9,7,1,2,0 };
	int n = sizeof(str) / sizeof(str[0]);
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (str[j] > str[j + 1]) {
				int tmp = 0;
				tmp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf("%d ", str[i]);

	}
	printf("\n");
	system("pause");
	return 0;
}