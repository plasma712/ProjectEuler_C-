/*
10 ������ �Ҽ��� ��� ���ϸ� 2 + 3 + 5 + 7 = 17 �� �˴ϴ�.

�̹鸸(2,000,000) ���� �Ҽ��� ���� ���Դϱ�?


*/

/*
	�Ҽ��� ������ �� üũ�ϴ°� �ð�����, ������ �Ҽ��� ���������� �ʴ´ٸ� �Ҽ��̴�.

	�� �Ҽ��� ã�� �� ���� �� ���� �����ϰ�, �� ����� ���� ������ �������� ��, ���������� �ʴ´ٸ� �Ҽ���� �� �� �ִ�.


*/

#include <iostream>
#include <string.h>
#include <list>
#include <vector>

using namespace std;

long long iResult = 0;
long long iRangeNum = 0;
static int newArray = 0;



int PrimeSum(int _iRangeNum)
{
	vector <int> vPrime;
	vPrime.push_back(2);

	for (int i = 3; i <= _iRangeNum; i++)
	{
		for (int k = 0; k <vPrime.size(); k++)
		{
			if (i % vPrime[k] == 0)
			{
				break;
			}
			if (i%vPrime[k] != 0 && vPrime.size() - 1 == k)
			{
				vPrime.push_back(i);
				//cout << vPrime[k] << endl;
//				iResult += i;
			}
		}
	}
	for (int j = 0; j < vPrime.size(); j++)
	{
		iResult += vPrime[j];
	}
	return iResult;

}

void main()
{
	cin >> iRangeNum;
	cout << PrimeSum(iRangeNum) << endl;
	return;
}