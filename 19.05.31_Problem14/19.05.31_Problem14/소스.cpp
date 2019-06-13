/*
	���� ���� n�� ���Ͽ�, ������ ���� ��� ������ �ݺ��ϱ�� �մϴ�.

	n �� n / 2 (n�� ¦���� ��)
	n �� 3 n + 1 (n�� Ȧ���� ��)

	13�� ���Ͽ� ���� ��Ģ�� �����غ��� �Ʒ�ó�� 10���� ������ ���� 1�� �˴ϴ�.

	13 �� 40 �� 20 �� 10 �� 5 �� 16 �� 8 �� 4 �� 2 �� 1
	���� ������ ���� �ʾ�����, �̷� ������ ��ġ�� � ���� �����ص� ���������� 1�� �������� �����˴ϴ�.
	(����: �̰��� �ݶ��� ���� Collatz Conjecture�̶�� �ϸ�, �̷� ������ ��ڼ� hailstone sequence�� �θ��⵵ �մϴ�)

	�׷���, �鸸(1,000,000) ������ ���� �������� �� 1���� �����ϴµ� ���� �� ������ ��ġ�� ���ڴ� ���Դϱ�?

	����: ��� ���� ���߿��� ���ڰ� �鸸�� �Ѿ�� �������ϴ�.
*/

#include <iostream>
#include <vector>
using namespace std;

bool PrimeCheck(unsigned long long _ullNumber)
{
	if (_ullNumber % 2 == 0)
		return true;
	else
		return false;
}

// void HailStoneSequence(bool _PrimeCheck, unsigned long long *_ullNumber)
// {
// 	if (_PrimeCheck == true)
// 		cout << "¦��" << endl;
// 	unsigned long long *ullNumber = nullptr;
// 	*ullNumber = *_ullNumber;
// 	if (_PrimeCheck == true)
// 	{
// 		*ullNumber = (*ullNumber / 2);
// 	}
// 	else
// 	{
// 		*ullNumber = 3 * (*ullNumber) + 1;
// 	}
// }

void HailStoneSequence(bool _PrimeCheck, unsigned long long *_ullNumber)
{
	if (_PrimeCheck == true)
	{
		*_ullNumber =(*_ullNumber / 2);
	}
	else
	{
		*_ullNumber = 3 * (*_ullNumber) + 1;
	}
}

void main()
{
	unsigned long long vMaxValue = 0;
	unsigned long long llMax_1 = 0;
	for (long long llNumber = 1000000; llNumber > 0; llNumber--)
	{
		long long llMax_2 = 0;
		unsigned long long ullNumber = llNumber;
		for(;;)
		{
			if (ullNumber == 1)
			{
				break;
			}
			else
			{
				llMax_2++;
				HailStoneSequence(PrimeCheck(ullNumber), &ullNumber);
			}
		}
		if (llMax_1 < llMax_2)
		{
			vMaxValue = llNumber;
			llMax_1 = llMax_2;
		}
	}

	cout << vMaxValue << endl;

	return;
}