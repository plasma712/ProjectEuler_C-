/*
	1 ~ 10 ������ � ���ε� ������ �������� ���� ���� ���� 2520�Դϴ�.

	�׷��� 1 ~ 20 ������ � ���ε� ������ �������� ���� ���� ���� ���Դϱ�?

	// �ּ� ����� ����...

	1 : 1
	2 : 2
	3 : 3
	4 : 2 2
	5 : 5
	6 : 2 3
	7 : 7
	8 : 2 2 2
	9 : 3 3
	10 : 2 5

	1 ~ 10 ������ �ּҰ������ 2^3 * 3^2 * 5 * 7

	���⼭ �Ҽ��� ī������ �ؾ��ҵ� (���� ���ڸ���)

	������ �Ҽ��� ���ϰ� , �Ҽ��� ���� ���ڷ� �������� �Ҽ� ��� �������� üũ...

	�Ҽ��� ����Ʈ�� �迭�̵� ���� �װɷ� ��� ���...
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> vPrime;
vector<int> vNumber;

void Prime(int _iNumber1, int _iNumber2)
{
	for (int i = _iNumber1; i <= _iNumber2; i++)
	{
		for (int k = 2; k <= _iNumber2; k++)
		{
			if (i < k)
				break;

			if (i%k == 0)
			{
				if (i == k)
				{
					//�Ҽ�
					vPrime.push_back(i);
				}
				else
					break;
			}
		}
	}
}

void a(int _a, int _b)
{
	for (int i = _a; i < _b; i++)
	{
		for (int k = 0; k < vPrime.size(); k++)
		{
			while (i%vPrime[k]==0)
			{
				vNumber.push_back(vPrime[k]);
			}
		}


	}
}


void main()
{
	int a, b;
	cin >> a;
	cin >> b;

	Prime(a, b);

	cout << vPrime.size() << endl; // ������ ����
	return;
}