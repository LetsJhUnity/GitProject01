//#include <iostream>
//using namespace std;
//
////2024-03-24 ���� Ǯ�� 
//
//void Colatz(int n)
//{
//	cout << n << " "; //�� ���
//	//���� ó��
//	if(n == 1) //1�� �Ǹ� �۾� ����
//		return;
//	//Ȧ���� ¦���� ���� ó��
//	n = n % 2 == 1 ? 3 * n + 1 : n / 2;
//	//if (n % 2 == 1)
//	//	n = 3 * n + 1;
//	//else
//	//	n = n / 2;
//	//���� ������(���ǽ��� ����� �� �Ǵ� �������θ� �ǴܵǴ�
//	//if�� ���� ��� ����� �� �ִ� ������)
//	//�� = ���� ? T : F
//	Colatz(n);
//}
//void DecimaltoBinary(int n)
//{
//	if(n == 0 || n == 1) //���ذ� �������� �� ���� ����մϴ�.( 0 or 1)
//	{
//		cout << n ;
//		return;
//	}
//	DecimaltoBinary(n / 2);
//	cout << n % 2 << "";//2�� ���� ������ �� ���(2������ 0 or 1)
//}
//int main()
//{
//	//Colatz(5);
//	DecimaltoBinary(28);
//	return 0;
//}