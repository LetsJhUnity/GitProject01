#include <iostream>
using namespace std;

//2�� �����ڿ� ���� �����ε�

//��ǥ�� ǥ���ϴ� Pos Ŭ����
//A(1,2) B(2,3)�̶� �Ҷ� C�� A+B��� C�� ��ǥ�� ����ϱ��? C(3,5)

class Pos
{
private :
	int x, y;
public :
	Pos(int x, int y) : x(x), y(y) {}

	Pos operator+(Pos& other)
	{
		return Pos(x + other.x, y + other.y);
	}
	//�۾��ϰ� �ִ� ������ -> +
	//�Ű������� �ǹ��ϴ� �� -> ����ϴ� ���(Ŭ����)
	//Ŭ���� = Ŭ���� + Ŭ����
	//�Ű������� �������� ������ ��� �� �� ��ü�� �ǹ��մϴ�.

	//���࿡ Ŭ���� = Ŭ���� + ���ڷ� ����� ���� ���?
	Pos operator+(int& value) {

	}
};

int main()
{
	Pos A(1, 2);
	Pos B(2, 3);
	Pos C = A + B;
	return 0;
}