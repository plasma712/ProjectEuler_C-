/*
	1 ~ 10 사이의 어떤 수로도 나누어 떨어지는 가장 작은 수는 2520입니다.

	그러면 1 ~ 20 사이의 어떤 수로도 나누어 떨어지는 가장 작은 수는 얼마입니까?

	// 최소 공배수 문제...

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

	1 ~ 10 사이의 최소공배수는 2^3 * 3^2 * 5 * 7

	여기서 소수를 카운팅을 해야할듯 (범위 숫자마다)

	범위의 소수를 구하고 , 소수를 범위 숫자로 나눈다음 소수 어떤게 나오는지 체크...

	소수를 리스트든 배열이든 묶고 그걸로 계속 계산...
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
					//소수
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

	cout << vPrime.size() << endl; // 사이즈 세기
	return;
}