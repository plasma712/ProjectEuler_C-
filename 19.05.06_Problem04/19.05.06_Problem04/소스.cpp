/*
앞에서부터 읽을 때나 뒤에서부터 읽을 때나 모양이 같은 수를 대칭수(palindrome)라고 부릅니다.
두 자리 수를 곱해 만들 수 있는 대칭수 중 가장 큰 수는 9009 (= 91 × 99) 입니다.
세 자리 수를 곱해 만들 수 있는 가장 큰 대칭수는 얼마입니까?
*/

/*
세자리수 곱셈
1. 자리수가 홀수, 짝수 일 때 구별 <길이로 체크할 예정>

   A.홀수
	 5자리를 체크할 때

	 만의자리 = 일의자리
	 천의자리 = 십의자리

   B.짝수
	 6자리를 체크할 때

	 십만의자리 = 일의자리
	 만의자리 = 십의자리
	 천의자리 = 백의자리

   C.이제 계산하는 공식 (함수화하기 위함)
	 일의자리는 N /1 %10
	 십의자리는 N /10 %10
	 백의자리는 N /100 %10

	 N은 자리수알아낼것
	 공식 -
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
	int *array = new int[_iNumber]; // 동적할당

	if (_iNumber % 2 == 0)//짝수
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
	else//홀수
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
	delete[] array; //배열 해제
}

void main()
{
	int iRangeNumber1, iRangeNumber2;
	int iObtainNumber;
	while (true)
	{
		cout << "범위 설정을 해주세요." << endl;
		cout << "시작 범위 수 : ";
		cin >> iRangeNumber1;
		cout << "끝 범위 수 : ";
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

	cout << iRangeNumber1 << " ~ " << iRangeNumber2 << " 범위 중에 대칭수 중 가장 큰 것 : " << iMax << endl;


}