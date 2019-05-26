#include <iostream>
using namespace std;
// 짝수이면서 4백만 이하인 모든 항을 더하면 얼마가 됩니까? (피보나치수열 수)

int iNumberA = 0;
int iNumberB = 0;
long long iNumberC = 0;
int iNumberD = 0;
long long iValue = 0;
inline void Fibonacci(int _iNumberA, int _iNumberB);
inline void Switch(int &_iNumberA, int &_iNumberB, long long &_iNumberC);

void SetFibonacci(int _iNumberA, int _iNumberB)
{
	iNumberA = _iNumberA;
	iNumberB = _iNumberB;
	iNumberC = iNumberA + iNumberB;
}
void Switch(int &_iNumberA, int &_iNumberB, long long &_iNumberC)
{
	iNumberD = _iNumberA;
	iNumberA = _iNumberB;
	iNumberB = _iNumberC;
	//	iNumberC = iNumberD;
}
void Fibonacci(int _iNumberA, int _iNumberB)
{
	iNumberC = _iNumberA + _iNumberB;
}

void main()
{
	cin >> iNumberA;
	cin >> iNumberB;
	SetFibonacci(iNumberA, iNumberB);
	//cout << iNumberC << endl;
	while (true)
	{
		if (iNumberC > 4000000)
		{
			break;
		}
		if (iNumberC % 2 == 0)
		{
			iValue =iValue+iNumberC;
		}
		Switch(iNumberA, iNumberB, iNumberC);
		Fibonacci(iNumberA, iNumberB);

	}
	cout << iValue+2 << endl;
}

