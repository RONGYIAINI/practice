#include<stdio.h>
#include<stdlib.h>

int main()
{
	//数组第一个和第二个按位异或
	//如果俩数相同  按位异或为0 
	int arr[] = { 1, 1, 2, 3, 4, 5, 6, 7, 8, 5, 4, 3, 2, 6, 7 };
	int num = sizeof(arr) / sizeof(arr[0]);
	int i = 1;
	int ret = arr[0];
	for (; i < num; i++)
	{
		ret ^= arr[i];
		//从头到尾按位异或,按位异或两个相同的数等于0
		//0按位异或一个数,该数的值不变
	}
	printf("%d\n", ret);
	system("pause");
	return 0;
}
