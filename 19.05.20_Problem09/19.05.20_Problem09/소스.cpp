/*
	세 자연수 a, b, c 가 피타고라스 정리 a^2 + b^2 = c^2 를 만족하면 피타고라스 수라고 부릅니다 (여기서 a < b < c ).
	예를 들면 3^2 + 4^2 = 9 + 16 = 25 = 5^2이므로 3, 4, 5는 피타고라스 수입니다.

	a + b + c = 1000 인 피타고라스 수 a, b, c는 한 가지 뿐입니다. 이 때, a × b × c 는 얼마입니까?
*/


#include<iostream>

using namespace std;

void main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	for (int k = 1; k <= 1000; k++)
	{
		for (int i = 1; i <= 1000; i++)
		{
			c = sqrt((k*k) + (i*i));
			if (pow(c, 2) == pow(k, 2) + pow(i, 2))
			{
				if (k + i + c == 1000)
				{
					a = k;
					b = i;
					goto End;
				}
			}
		}
	}
End:

	cout << a << "\t" << b << "\t" << c << endl;
	cout << a * b * c << endl;
	return;
}