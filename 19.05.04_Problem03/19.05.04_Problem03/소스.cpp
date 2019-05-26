/*
	소수를 구하는 방법.
	소수는 1과 자기자신을 제외하고는 나누어지지 않는 수이다.
	따라서 소수는 n%n 일 때를 제외하고는 나머지가 항상있다.

	이걸 이용한다면,
	좌측의 n을 소수인지 판별을 하고
	우측의 경우 같은 n일 때 까지 나머지가 나와선 안된다.

	따라서 for을 이용할 때

	for(int i=2; i<100; i++)
	{
		for(int k =1; k<i; k++)
		{
			if(i%k==0)
			{
				return;
			}
		}
		cout << i << endl; (소수인경우 판별가능);
	}

	좀더 심화해서 한다면.

	void Frac(int 특정숫자범위)
	{
		for(int i=2; i<특정숫자범위; i++)
		{
			for(int k =1; k<i; k++)
			{
				if(i%k==0)
				{
					return;
				}
			}
			cout << i << endl; (소수인경우 판별가능);
		}
	}

	문제상에서 원하는건 특정 소수를 곱해 나타낸 수
	i (소수)가 나올 때 마다 특정 숫자범위를 나누어 준다. ( 나누어준 i를 저장하는것도 필요)
	2 5 7 11를 곱했던 770이라고 하자 , 위와 같이 나눈다면 특정 숫자범위는 385 , 77 , 11로 나올꺼다.
	즉 특정 숫자범위를 나누는 도중 특정 숫자범위 == 나눈 숫자와 같다면 거기서 멈춘다.

	void Frac(int 특정숫자범위)
	{
		int c특정숫자범위<c는 copy의 약자>= 특정숫자범위
		for(int i=2; i<c특정숫자범위; i++)
		{
			for(int k =1; k<i; k++)
			{
				if(i%k==0)
				{
					return;
				}
			}
			if(c특정숫자범위 % i ==0) // 나머지가 나오지 않는다면
			{
				c특정숫자범위 = c특정숫자범위 / i;
				if(c특정숫자범위 == i)
				{
					goto문 활용해서 빠져나옴
				}
			}
		}
	}

	// 추가로 i를 저장하기위해 리스트 활용하기

*/

/*
	return에 대한 잘못된 생각으로 함수에서 생각하지 못한 방향으로 빠져나가는 것을 디버깅으로 확인
	실질적으로 생각했던건 맞으나 논리적으로는 부족
*/

/*
어떤 수를 소수의 곱으로만 나타내는 것을 소인수분해라 하고, 이 소수들을 그 수의 소인수라고 합니다.
예를 들면 13195의 소인수는 5, 7, 13, 29 입니다.

600851475143의 소인수 중에서 가장 큰 수를 구하세요.

*/

#include <iostream>
#include <list>

using namespace std;
static int iMaxNumber = 0;

void Frac(long long _iNumber)
{
	list <long long> fracList;
	list<long long>::iterator itor;
	itor = fracList.begin();


	long long iMax = 0;
	long long c_iNumber = _iNumber;
	for (int i = 2; i <= c_iNumber; i++)
	{
		for (int k = 2; k <= i; k++)
		{
			if (i%k == 0)
			{
				if (i == k)
				{
					if (c_iNumber % i == 0) // 나머지가 나오지 않는다면
					{
						fracList.push_back(i); // 리스트에 배열
						c_iNumber = c_iNumber / i;
						if (c_iNumber == 1)
						{
							iMax = i;
						}
					}
				}
				else
					break;
			}
		}
	}
	cout << iMax << endl;
	cout << endl;
	for (itor = fracList.begin(); itor != fracList.end(); itor++) // 리스트 출력
	{
		cout << *itor << "\t ";
	}

}

void main()
{
	//int Number;
	//cin >> Number;
	Frac(600851475143);
	

}