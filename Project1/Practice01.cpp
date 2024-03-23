#include <iostream>
#include <cstdarg>
using namespace std;

//가변 매개변수를 이용해 숫자들의 합, 숫자들 중 가장 작은 값, 숫자 들중 가장 큰 값을 출력하는 기능을 구현하시오.

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
