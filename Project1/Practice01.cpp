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
	ptr = sum;
	ptr(1,2,3,4,5);
	ptr = min;
	ptr(1, 2, 3, 4, 5);
	ptr = max;
	ptr(1, 2, 3, 4, 5);

	return;
}

void sum(int count, ...)
{
}

void min(int count, ...)
{
}

void max(int count, ...)
{
}
