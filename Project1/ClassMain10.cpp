//#include <iostream>
//using namespace std;
//
////friend(프렌드)
////수평적인 관계를 가지는 클래스 간의 멤버 변수를 공유해야 하는 경우에 사용하는 키워드입니다.
//
////다른 타입의 객체에 접근하는 것이 가능해 코드의 확장을 수월하게 진행할 수 있습니다.
////대신 이 방식은 캡슐화에 위반되는 방식이기에 설계 시 유의할 필요가 있습니다.
//
//class Person_A
//{
//private :
//	string name;
//	int age;
//	friend class Person_B; //friend 클래스 PersonB 선언
//};
//
//class Person_B
//{
//public :
//	void info(Person_A a)
//	{
//		cout << "이름 : " << a.name << endl;
//		cout << "나이 : " << a.age << endl;
//	}
//};
//
//class Shape
//{
//private :
//	string name;
//	string length;
//public : 
//	friend class Color;
//	Shape()
//	{
//		name = "사각형";
//	}
//	void setName(string name)
//	{
//		this->name = name;
//	}
//};
//class Color
//{
//private :
//	string color;
//public :
//	Color()
//	{
//		color = "초록색";
//	}
//	void setColor(string color)
//	{
//		this->color = color;
//	}
//	void ColorInfo(Shape s)
//	{
//		cout << color << "색깔의" << s.name << endl;
//	}
//};
//
//int main()
//{
//	Shape s;
//	Color c;
//	c.ColorInfo(s);
//
//	s.setName("삼각형");
//	c.setColor("파란색");
//	c.ColorInfo(s);
//
//	
//	return 0;
//}