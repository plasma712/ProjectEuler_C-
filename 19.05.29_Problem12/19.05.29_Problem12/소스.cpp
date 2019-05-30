/*

1부터 n까지의 자연수를 차례로 더하여 구해진 값을 삼각수라고 합니다.
예를 들어 7번째 삼각수는 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28이 됩니다.
이런 식으로 삼각수를 구해 나가면 다음과 같습니다.

1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...
이 삼각수들의 약수를 구해봅시다.

 1: 1
 3: 1, 3
 6: 1, 2, 3, 6
10: 1, 2, 5, 10
15: 1, 3, 5, 15
21: 1, 3, 7, 21
28: 1, 2, 4, 7, 14, 28
위에서 보듯이, 5개 이상의 약수를 갖는 첫번째 삼각수는 28입니다.

그러면 500개 이상의 약수를 갖는 가장 작은 삼각수는 얼마입니까?




*/
#include<iostream>
#include<vector>
using namespace std;

int TriangleNumber(long long _iNum)
{
	vector <int> vList;

	int iNum = 0;

	iNum = _iNum;

	for (long long k = 1; k <= iNum; k++)
	{
		if (_iNum%k == 0)
		{
			if (_iNum / k == k)
			{
				vList.push_back(k);
				
			}
			else
			{
				vList.push_back(_iNum / k);
				vList.push_back(k);
			}
			iNum = _iNum / k;
			if (k == iNum)
				break;
		}
	}
	return vList.size();
}

long long TriNumber(int _iNum)
{
	long long iMax = 0;

	for (int i = 0; i <= _iNum; i++)
	{
		iMax += i;
	}

	return iMax;
}

void sizeCheck(int _iSize,bool* _bTrue)
{
	if (_iSize >= 500)
	{
		cout << "찾음 " << endl;
		*_bTrue = false;
	}
}

void MaxTriNum(int _iNum)
{
	long long longNumber = 0;
	longNumber=TriNumber(_iNum);
	cout << longNumber << endl;
}

void main()
{
	bool bTrue = true;
	long long iNum = 1;

	while (true)
	{
		sizeCheck(TriangleNumber(TriNumber(iNum)),&bTrue);
		if (bTrue == true)
			iNum++;
		else
			break;
	}
	MaxTriNum(iNum);
	return;
}