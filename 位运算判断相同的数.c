#include<stdio.h>
#include<stdlib.h>

int main()
{
	//�����һ���͵ڶ�����λ���
	//���������ͬ  ��λ���Ϊ0 
	int arr[] = { 1, 1, 2, 3, 4, 5, 6, 7, 8, 5, 4, 3, 2, 6, 7 };
	int num = sizeof(arr) / sizeof(arr[0]);
	int i = 1;
	int ret = arr[0];
	for (; i < num; i++)
	{
		ret ^= arr[i];
		//��ͷ��β��λ���,��λ���������ͬ��������0
		//0��λ���һ����,������ֵ����
	}
	printf("%d\n", ret);
	system("pause");
	return 0;
}
