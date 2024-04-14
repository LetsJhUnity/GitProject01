//#include <iostream>
//using namespace std;
//
////2항 연산자에 대한 오버로딩
//
////좌표를 표현하는 Pos 클래스
////A(1,2) B(2,3)이라 할때 C가 A+B라면 C의 좌표는 어디일까요? C(3,5)
//
//class Pos
//{
//private :
//	int x, y;
//public :
//	Pos(int x, int y) : x(x), y(y) {}
//
//	Pos operator+(Pos& other)
//	{
//		return Pos(x + other.x, y + other.y);
//	}
//	//작업하고 있는 연산자 -> +
//	//매개변수가 의미하는 것 -> 계산하는 대상(클래스)
//	//클래스 = 클래스 + 클래스
//	//매개변수가 참조자의 형태일 경우 그 값 자체를 의미합니다.
//
//	//만약에 클래스 = 클래스 + 숫자로 만들고 싶을 경우?
//	Pos operator+(int& value) {
//	}
//	//전역 함수 오버로딩
//	//※ const가 매개변수로 붙을 경우, 그 값은 읽어내기만 하고 변경은 하지 않음을 의미합니다.
//	friend Pos operator-(const Pos& p1, const Pos& p2)
//	{
//		//Pos pos = Pos(p1.x - p2.x, p1.y - p2.y);
//		//return pos;
//		return Pos(p1.x - p2.x, p1.y - p2.y);
//	}
//	friend Pos operator-(int number, Pos p1)
//	{
//		return Pos(number - p1.x, number - p1.y);
//	}
//};
//int main()
//{
//	Pos A(1, 2);
//	Pos B(2, 3);
//	Pos C = A + B;
//	return 0;
//}

//연습문제 ) ClassMain11 , ClassMain12.cpp