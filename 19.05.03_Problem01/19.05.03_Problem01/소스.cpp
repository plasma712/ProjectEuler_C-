#include <iostream>
using namespace std;
//1000���� ���� �ڿ��� �߿��� 3 �Ǵ� 5�� ����� ��� ���ϸ� ���ϱ��?

int Multiple1, Multiple2, Multiple3 = 0;

void main()
{
	for (int i = 0; i < 1000; i++)
	{
		if (i % 3 == 0)
		{
			Multiple1 += i;
		}
		if (i % 5 == 0)
		{
			Multiple2 += i;
		}
		if (i % 3 == 0 && i % 5 == 0)
		{
			Multiple3 += i;
		}
	}
	cout << Multiple1 + Multiple2 - Multiple3 << endl;
	return;
}