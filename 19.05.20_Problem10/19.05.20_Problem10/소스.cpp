/*
10 이하의 소수를 모두 더하면 2 + 3 + 5 + 7 = 17 이 됩니다.

이백만(2,000,000) 이하 소수의 합은 얼마입니까?


*/

/*
	소수를 일일이 다 체크하는건 시간낭비, 실제로 소수로 나누어지지 않는다면 소수이다.

	즉 소수를 찾을 때 마다 그 값을 저장하고, 그 저장된 값을 가지고 나누었을 때, 나누어지지 않는다면 소수라고 볼 수 있다.


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