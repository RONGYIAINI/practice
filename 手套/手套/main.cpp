#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
���ڷ�0��������(a1 < a2 < a3 < ... < an)��θ���ÿһ�������أ�
	��һ��С���ӣ���2 3 4 5����������������������ͣ���֤û���������������ĺʹ���������϶���ѡ��3��4��5���������Ҫ��һ�����������������������ĺͶ�����Ϊ��С��һ����Ӧ����ôѡ��
	��Ϊ������2 + 3 + 4 + 5�� - 2�� + 1 ���ɱ�֤��������ȡ�����������ܱ�������Ϊ������������Сֵ��
	����(a1, a2, ...an)����Ϊ(sum(a1, a2, ..., an) - a1) + 1;// a1��ֵΪ��Сֵ
1. ��Ŀ�д���������Ϊ��һ��û�У���ʱ����Ҫ��������ɫ���е����״��߲ſ��Ա�֤���⡣
2. �ڶ������������������������ֵ���������������߷ֱ��ҳ��ܹ�����ȫ����ɫ����С����
3. �ж�����������һ����Ҫ�õ�������С������һ�ߣ�Ȼ������һ�������һ�����ܱ�֤����
*/
class Gloves {
	int	n_left = 0;
	int n_right = 0;
	int sum = 0;
public:
	int findMinimum(int n, vector<int> left, vector<int> right) {
	
		int left_min = 30, right_min = 30;
		for (int i = 0; i < n; i++)
		{
			
			if (left[i] * right[i] == 0) {
				sum += left[i] + right[i];
			}
			else {
				n_left += left[i];
				n_right += right[i];
				left_min = min(left[i], left_min);
				right_min = min(right[i], right_min);
			}
		}
		sum += min(n_left - left_min, n_right - right_min) + 2;
		return sum ;
	}
};
int main()
{
	int n = 4;
	vector<int> left{ 0,7,1,6 };
	vector<int> righ{ 1,5,0,6 };
	Gloves a;
	cout << a.findMinimum(4, left, righ);


	return 0;
}