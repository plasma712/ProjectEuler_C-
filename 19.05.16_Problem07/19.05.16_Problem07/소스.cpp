/*
	�Ҽ��� ũ�� ������ �����ϸ� 2, 3, 5, 7, 11, 13, ... �� ���� �˴ϴ�.
	
	�� �� 10,001��°�� �Ҽ��� ���ϼ���.
*/

#include<iostream>
using namespace std;

long long Prime()
{
	int iCount = 0;
	int iResult = 0;
	while (iCount<10001)
	{
		for (int k = 2;; k++)
		{
			for (int i = 2; i <= k; i++)
			{
				if (k < i)
					break;

				if (k % i == 0)
				{
					if (k == i)
					{
						iCount++;
						iResult = k;
						if (iCount == 10001)
							break;
					}
					else
						break;
				}
			}
			if (iCount == 10001)
				break;
		}
	}
	return iResult;
}




void main()
{
	cout << Prime() << endl;
}