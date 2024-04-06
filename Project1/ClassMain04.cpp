#include <iostream>
using namespace std;

//클래스 상속
//기존의 클래스를 활용해 새로운 클래스를 만들어주는 설계 기법을 의미합니다.
//데이터가 상하 관계로 표현될 수 있는 데이터라면, 이 방법을 통해 설계합니다.
//상속을 통해 클래스 데이터를 구현할 경우 기존의 데이터의 값을 이어받게 되면서
//중복적인 코드 설계를 막는데 큰 도움이 되고, 프로그램 데이터의 관계 구조을 판단하기가 수월합니다.
//하지만 상속으로 인해 기존 클래스의 구현 내용을 전부 알고 있어야 하기 때문에, 불필요한 구현 내용의 노출을 막는
//캡슐화 설계에는 위반되는 행위로도 보고 있습니다.

class Person
{
private :
	string name;
	int age;
public :
	Person(const string& name, int age);
	//const가 자료형 전에 붙을 경우 상수 취급합니다.(고정형 데이터)
	void Info();
};

//상속을 통해 새로 만들어줄 클래스 -> 자식 클래스 , 하위 클래스, 파생 클래스
//상속을 위해 사용되는 기존의 클래스 -> 부모 클래스, 상위 클래스, 기본 클래스

//public 상속
//class 자식클래스명 : public 부모클래스명
class Student : public Person
{
private :
	int id;
public :
	Student(int id, const string& name, int age);
};

int main()
{
	Student s(1, "김철수", 17);
	s.Info();

	return 0;
}
//멤버 이니셜라이저
//클래스 생성자에 사용이 가능하며, 클래스에서 설정한 매개변수의 값을 멤버에 초기화할 수 있는 기능을 가졌습니다.
//클래스명::생성자(매개변수) : 멤버명1(매개변수1), 멤버명2(매개변수2)...
Person::Person(const string& name, int age) : name(name), age(age)
{
	//this->name = name;
	//this->age = age;
}
void Person::Info()
{
	cout << name << "의 나이는 " << age << "살입니다.";
}
//상속 멤버 이니셜라이저
//자식클래스명::생성자(매개변수) : 부모클래스명(매개변수)의 형태로 만들어지며
//자식 클래스에서 지정한 매개변수의 값으로 부모 클래스의 생성자에 값을 전달하게 됩니다.
Student::Student(int id, const string& name, int age) : id(id), Person(name,age)
{
	//this->id = id;
}
