#include<iostream>

using namespace std;

enum Grid
{
	WIDTH = 21,
	HEIGHT =21
};



void main()
{
	unsigned long long Grid[WIDTH][HEIGHT];
	// 격자 기본적인 초기화를 1로해줌.(가장 적은 횟수가 1번가는 횟수이기 때문)
	for (int i = 0; i < HEIGHT; i++)	 // HEIGHT
	{
		for (int k = 0; k < WIDTH; k++) // WIDTH
		{
			Grid[i][k] = 1;
		}
	}
	
	for (int i = 1; i < HEIGHT; i++)
	{
		for (int k = 1; k < WIDTH; k++)
		{
			Grid[k][i] = Grid[k][i-1] + Grid[k-1][i];
			//cout << Grid[k][i] << endl;
		}
	}

	cout << Grid[HEIGHT-1][WIDTH-1] << endl;
	system("pause");

	return;
}