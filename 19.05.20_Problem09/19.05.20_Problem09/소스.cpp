/*
	�� �ڿ��� a, b, c �� ��Ÿ��� ���� a^2 + b^2 = c^2 �� �����ϸ� ��Ÿ��� ����� �θ��ϴ� (���⼭ a < b < c ).
	���� ��� 3^2 + 4^2 = 9 + 16 = 25 = 5^2�̹Ƿ� 3, 4, 5�� ��Ÿ��� ���Դϴ�.

	a + b + c = 1000 �� ��Ÿ��� �� a, b, c�� �� ���� ���Դϴ�. �� ��, a �� b �� c �� ���Դϱ�?
*/


#include<iostream>

using namespace std;

void main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	for (int k = 1; k <= 1000; k++)
	{
		for (int i = 1; i <= 1000; i++)
		{
			c = sqrt((k*k) + (i*i));
			if (pow(c, 2) == pow(k, 2) + pow(i, 2))
			{
				if (k + i + c == 1000)
				{
					a = k;
					b = i;
					goto End;
				}
			}
		}
	}
End:

	cout << a << "\t" << b << "\t" << c << endl;
	cout << a * b * c << endl;
	return;
}