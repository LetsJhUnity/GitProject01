#include <iostream>
#include <cstdarg>
using namespace std;

//���� �Ű������� �̿��� ���ڵ��� ��, ���ڵ� �� ���� ���� ��, ���� ���� ���� ū ���� ����ϴ� ����� �����Ͻÿ�.

void sum(int count, ...);
void min(int count, ...);
void max(int count, ...);

int main()
{
	void (*ptr)(int count, ...);
	//�Լ� ������
	//�Լ��� ������ Ÿ��(*�������̸�) (�Ű�����);
	//�ش� ���� ����� �Լ��� �̸��� �����ϴ� ������ �� �Լ��� ����Ű�� ���� �����մϴ�.
	//�̷� ������ ����� �����մϴ�.
	//�Լ� �����͸� �̿��ϸ� �ϳ��� �̸����� ���� ���� ������ �Լ��� ���� ���� ���� �����մϴ�.
	ptr = NULL;
	while (true)
	{
		cout << "����� �������ּ��� 1. ���� 2. �ּ� 3. �ִ� ";
		int choice;
		cin >> choice;

		switch (choice)
		{
		case 1:
			ptr = sum; break;
		case 2:
			ptr = min; break;
		case 3:
			ptr = max; break;
		default :
			cout << "�Է��� �߸��Ǿ����ϴ�" << endl;
		}

		if(ptr != NULL)
			ptr(5, 1, 2, 3, 4, 5);
	}
	return 0;
} 

void sum(int count, ...)
{
	va_list ap;
	va_start(ap, count);
	int sum = 0;
	for (int i = 0; i < count; i++)
	{
		sum += va_arg(ap,int);
	}
	cout << "���� : " << sum << endl;
	va_end(ap);
}

void min(int count, ...)
{
	int temp;
	va_list ap;
	va_start(ap, count);
	int min = ap[0]; //ù ���� ���� ���� ������ �����մϴ�.
	for (int i = 0; i < count; i++)
	{
		temp = va_arg(ap, int);
		if (min > temp)
		{
			min = temp;
		}
	}
	cout << "���� ���� �� : " << min << endl;
	va_end(ap);
}

void max(int count, ...)
{
	int temp;
	va_list ap;
	va_start(ap, count);
	int max = ap[0];
	for (int i = 0; i < count; i++)
	{
		temp = va_arg(ap, int);
		if (max < temp)
		{
			max = temp;
		}
	}
	cout << "���� ū �� : " << max << endl;
	va_end(ap);
}

