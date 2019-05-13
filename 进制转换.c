#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, sn;
	printf("请输入你要转换的数:");
	scanf("%d", &n);
	printf("\n" );
	printf("请输入你要转换的进制:");
	scanf("%d", &sn);
	printf("\n");
	int i, j;
	char str[32];
	for (i = 0; n; i++) {
		str[i] = n % sn;
		n = n / sn;
	}
	for (--i; i >= 0; i--) {
		printf("%d", str[i]);
	}
	system("pause");
	return 0;
}