/*
	�Ҽ��� ���ϴ� ���.
	�Ҽ��� 1�� �ڱ��ڽ��� �����ϰ�� ���������� �ʴ� ���̴�.
	���� �Ҽ��� n%n �� ���� �����ϰ�� �������� �׻��ִ�.

	�̰� �̿��Ѵٸ�,
	������ n�� �Ҽ����� �Ǻ��� �ϰ�
	������ ��� ���� n�� �� ���� �������� ���ͼ� �ȵȴ�.

	���� for�� �̿��� ��

	for(int i=2; i<100; i++)
	{
		for(int k =1; k<i; k++)
		{
			if(i%k==0)
			{
				return;
			}
		}
		cout << i << endl; (�Ҽ��ΰ�� �Ǻ�����);
	}

	���� ��ȭ�ؼ� �Ѵٸ�.

	void Frac(int Ư�����ڹ���)
	{
		for(int i=2; i<Ư�����ڹ���; i++)
		{
			for(int k =1; k<i; k++)
			{
				if(i%k==0)
				{
					return;
				}
			}
			cout << i << endl; (�Ҽ��ΰ�� �Ǻ�����);
		}
	}

	�����󿡼� ���ϴ°� Ư�� �Ҽ��� ���� ��Ÿ�� ��
	i (�Ҽ�)�� ���� �� ���� Ư�� ���ڹ����� ������ �ش�. ( �������� i�� �����ϴ°͵� �ʿ�)
	2 5 7 11�� ���ߴ� 770�̶�� ���� , ���� ���� �����ٸ� Ư�� ���ڹ����� 385 , 77 , 11�� ���ò���.
	�� Ư�� ���ڹ����� ������ ���� Ư�� ���ڹ��� == ���� ���ڿ� ���ٸ� �ű⼭ �����.

	void Frac(int Ư�����ڹ���)
	{
		int cƯ�����ڹ���<c�� copy�� ����>= Ư�����ڹ���
		for(int i=2; i<cƯ�����ڹ���; i++)
		{
			for(int k =1; k<i; k++)
			{
				if(i%k==0)
				{
					return;
				}
			}
			if(cƯ�����ڹ��� % i ==0) // �������� ������ �ʴ´ٸ�
			{
				cƯ�����ڹ��� = cƯ�����ڹ��� / i;
				if(cƯ�����ڹ��� == i)
				{
					goto�� Ȱ���ؼ� ��������
				}
			}
		}
	}

	// �߰��� i�� �����ϱ����� ����Ʈ Ȱ���ϱ�

*/

/*
	return�� ���� �߸��� �������� �Լ����� �������� ���� �������� ���������� ���� ��������� Ȯ��
	���������� �����ߴ��� ������ �������δ� ����
*/

/*
� ���� �Ҽ��� �����θ� ��Ÿ���� ���� ���μ����ض� �ϰ�, �� �Ҽ����� �� ���� ���μ���� �մϴ�.
���� ��� 13195�� ���μ��� 5, 7, 13, 29 �Դϴ�.

600851475143�� ���μ� �߿��� ���� ū ���� ���ϼ���.

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
					if (c_iNumber % i == 0) // �������� ������ �ʴ´ٸ�
					{
						fracList.push_back(i); // ����Ʈ�� �迭
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
	for (itor = fracList.begin(); itor != fracList.end(); itor++) // ����Ʈ ���
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