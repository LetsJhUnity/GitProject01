#include <iostream>
using namespace std;

//������ + �Լ�
//�Ű������� ���޹��� ���� �����ؼ� �Լ� ������ ����ϴ� �����Դϴ�.
//�׸��� �Լ��� ����Ǹ� �ش� ���� ������ �󿡼� �����˴ϴ�.
void PlusValue(int value)
{
	value++;
}
void PlusReference(int& value)
{
	value++;
}
void PlusPointer(int* value)
{
	*value += 1;
	//++�� �� ó���� ������ ������ �ۼ� �ÿ��� += 1�� �ۼ������ �ٷ� ����� Ȯ���غ� �� �ֽ��ϴ�.
}


//���� ����) �����ڸ� �̿��� ������ ���� �Լ��� ����� ����� �����غ�����.
//1. ������ int ������ ������ ��ȣ�� �ٲٴ� �Լ�
//2. ������ int ������ ������ ������ �̴� �Լ�
//���� ������ ����� ���� practice�Դϴ�.


void Inverse(int& value)
{
	value = -value;
}

void Square(int& value)
{
	value = value * value;
}


int main()
{
	int data = 1;
	cout << data << endl;
	PlusValue(data); //�� ����� ����  �����߱� ������ data �� ��ü���� ��ȭ�� ���� �ʽ��ϴ�.(call by value)
	cout << data << endl; 
	PlusReference(data);
	cout << data << endl;//�� ���� ���� �����߰�, �Ű������� �������̱� ������ ���޹��� ���� �����ϰ� �˴ϴ�.
	//���� �Լ��� ����� value�� �����Ǵ��� value�� data�� ������ ���̱⿡ �� ���� ���� ������ ����˴ϴ�. call by reference)
	PlusPointer(&data); //�����Ͱ� �Ű������� ��� data�� �ּ�(���� ���� ��ġ)�� �����մϴ�.
	//���� value�� �����Ǿ ���� ������ġ�� �۾��� ������ ���̹Ƿ� ���� ���� ������ ����˴ϴ�.(call by reference)
	cout << data << endl;


	int practice = 2;
	Inverse(practice);
	cout << practice << endl;
	Square(practice);
	cout << practice << endl;


	return 0;
}