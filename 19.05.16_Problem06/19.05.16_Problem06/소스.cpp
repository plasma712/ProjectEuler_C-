/*
	1���� 10���� �ڿ����� ���� ������ ���ϸ� ������ �����ϴ� (������ ��).

	1^2 + 2^2 + ... + 10^2 = 385
	1���� 10�� ���� ���� ������ �� ����� �����ϸ� ������ �����ϴ� (���� ����).
	
	(1 + 2 + ... + 10)^2 = 552 = 3025
	���� 1���� 10���� �ڿ����� ���� "���� ����"�� "������ ��" �� ���̴� 3025 - 385 = 2640 �� �˴ϴ�.
	
	�׷��� 1���� 100���� �ڿ����� ���� "���� ����"�� "������ ��"�� ���̴� ���Դϱ�?


*/


#include <iostream>

using namespace std;

int SumSquare(int _iNumber1, int _iNumber2)
{
	int iSumSquare = 0;
	for (int k = _iNumber1; k <= _iNumber2; k++)
	{
		iSumSquare += k;
	}
	return iSumSquare * iSumSquare;
}

int SquareSum(int _iNumber1, int _iNumber2)
{
	int iSquareSume = 0;

	for (int k = _iNumber1; k <= _iNumber2; k++)
	{
		iSquareSume += k * k;
	}
	return iSquareSume;

}

void main()
{
	int Number1, Number2 = 0;
	int result;
	cin >> Number1 >> Number2;

	result = SumSquare(Number1, Number2) - SquareSum(Number1, Number2);

	cout << result << endl;
	return;
}
