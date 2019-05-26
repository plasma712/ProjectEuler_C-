/*
	1부터 10까지 자연수를 각각 제곱해 더하면 다음과 같습니다 (제곱의 합).

	1^2 + 2^2 + ... + 10^2 = 385
	1부터 10을 먼저 더한 다음에 그 결과를 제곱하면 다음과 같습니다 (합의 제곱).
	
	(1 + 2 + ... + 10)^2 = 552 = 3025
	따라서 1부터 10까지 자연수에 대해 "합의 제곱"과 "제곱의 합" 의 차이는 3025 - 385 = 2640 이 됩니다.
	
	그러면 1부터 100까지 자연수에 대해 "합의 제곱"과 "제곱의 합"의 차이는 얼마입니까?


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
