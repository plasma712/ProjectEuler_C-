/*
�տ������� ���� ���� �ڿ������� ���� ���� ����� ���� ���� ��Ī��(palindrome)��� �θ��ϴ�.
�� �ڸ� ���� ���� ���� �� �ִ� ��Ī�� �� ���� ū ���� 9009 (= 91 �� 99) �Դϴ�.
�� �ڸ� ���� ���� ���� �� �ִ� ���� ū ��Ī���� ���Դϱ�?
*/

/*
���ڸ��� ����
1. �ڸ����� Ȧ��, ¦�� �� �� ���� <���̷� üũ�� ����>

   A.Ȧ��
	 5�ڸ��� üũ�� ��

	 �����ڸ� = �����ڸ�
	 õ���ڸ� = �����ڸ�

   B.¦��
	 6�ڸ��� üũ�� ��

	 �ʸ����ڸ� = �����ڸ�
	 �����ڸ� = �����ڸ�
	 õ���ڸ� = �����ڸ�

   C.���� ����ϴ� ���� (�Լ�ȭ�ϱ� ����)
	 �����ڸ��� N /1 %10
	 �����ڸ��� N /10 %10
	 �����ڸ��� N /100 %10

	 N�� �ڸ����˾Ƴ���
	 ���� -
	 Number/(10*N-1)%10

*/
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int iMax = 0;
void Compare(int _iObtainNumber)
{
	if (iMax < _iObtainNumber)
	{
		iMax = _iObtainNumber;
	}
	else
		return;
}

void Digit(int _iNumber, int _iObtainNumber)
{
	bool bTrue = 0;
	int *array = new int[_iNumber]; // �����Ҵ�

	if (_iNumber % 2 == 0)//¦��
	{
		for (int i = 0; i < _iNumber; i++)
		{
			int iSquare = pow(10, i);
			//cout << iSquare << endl;
			array[i] = _iObtainNumber / iSquare % 10;
			//cout << "array[" << i << "] :" << array[i] << endl;
		}
		for (int k = 0; k < _iNumber / 2; k++)
		{
			if (array[k] != array[_iNumber - k - 1])
			{
				bTrue++;
				break;
			}
		}
		if (bTrue == 0)
		{
			Compare(_iObtainNumber);
		}
	}
	else//Ȧ��
	{
		for (int i = 0; i < _iNumber; i++)
		{
			int iSquare = pow(10, i);
			array[i] = _iObtainNumber / (10 * _iNumber - 1) % 10;
		}
		for (int k = 0; k < _iNumber / 2 + 1; k++)
		{
			if (array[k] != array[_iNumber - k - 1])
			{
				bTrue++;
				break;
			}
		}
		if (bTrue == 0)
		{
			Compare(_iObtainNumber);
		}
	}
	delete[] array; //�迭 ����
}

void main()
{
	int iRangeNumber1, iRangeNumber2;
	int iObtainNumber;
	while (true)
	{
		cout << "���� ������ ���ּ���." << endl;
		cout << "���� ���� �� : ";
		cin >> iRangeNumber1;
		cout << "�� ���� �� : ";
		cin >> iRangeNumber2;

		if (iRangeNumber1 < iRangeNumber2)
			break;
		else
		{
			system("cls");
		}
	}
	for (int i = iRangeNumber1; i < iRangeNumber2; i++)
	{
		for (int k = iRangeNumber1; k < iRangeNumber2; k++)
		{
			iObtainNumber = i * k;
			string sObtainNumber = to_string(iObtainNumber);
			Digit(sObtainNumber.length(), iObtainNumber);
		}
	}

	cout << iRangeNumber1 << " ~ " << iRangeNumber2 << " ���� �߿� ��Ī�� �� ���� ū �� : " << iMax << endl;


}