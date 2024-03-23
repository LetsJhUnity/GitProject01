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
	//함수 포인터
	//함수와 동일한 타입(*포인터이름) (매개변수);
	//해당 값을 만들면 함수의 이름을 대입하는 것으로 그 함수를 가리키는 것이 가능합니다.
	//이런 식으로 사용이 가능합니다.
	//함수 포인터를 이용하면 하나의 이름으로 여러 같은 형태의 함수를 돌려 쓰는 것이 가능합니다.
	ptr = NULL;
	while (true)
	{
		cout << "기능을 선택해주세요 1. 총합 2. 최소 3. 최대 ";
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
			cout << "입력이 잘못되었습니다" << endl;
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
	cout << "총합 : " << sum << endl;
	va_end(ap);
}

void min(int count, ...)
{
	int temp;
	va_list ap;
	va_start(ap, count);
	int min = ap[0]; //첫 값을 가장 작은 값으로 설정합니다.
	for (int i = 0; i < count; i++)
	{
		temp = va_arg(ap, int);
		if (min > temp)
		{
			min = temp;
		}
	}
	cout << "가장 작은 값 : " << min << endl;
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
	cout << "가장 큰 값 : " << max << endl;
	va_end(ap);
}

