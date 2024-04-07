//#include <iostream>
//using namespace std;
////다형성(Polymorphism) : 모습은 같으나 형태는 다른 것
////1. 동적 바인딩
////2. 포인터
////3. 가상 함수
//class Base
//{
//public :
////virtual 키워드는 함수를 가상 함수로 만드는 키워드입니다.
////가상 함수란 상속 관계에서 자식 클래스가 부모 클래스의 메소드를
////재정의 할 것으로 예상되는 함수에 설정해 함수 호출 시 자식의 위치로
////연결되도록 처리하는 함수를 의미합니다.
//	virtual void Method()
//	{
//		cout << "I'm a Base Class Object" << endl;
//	}
//};
//class Derived : public Base
//{
//public :
//	void Method()
//	{
//		cout << "I'm a Derived Class Object by Base Class" << endl;
//	}
//};
//class Derived2 : public Base
//{
//public:
//	void Method()
//	{
//		cout << "I'm a Derived Class Object 2 by Base Class" << endl;
//	}
//};
//
////Base 클래스 형태의 데이터를 전달받아 그 함수를 실행하는 코드
//void MethodTest(Base* base_object)
//{
//	base_object->Method();
//}
//
//int main()
//{
//	Base b;
//	Derived d;
//	b.Method();
//	d.Method();
//	//클래스의 타입에 따라 그에 맞는 멤버(변수와 함수)를 호출하게 됩니다.
//	//이를 정적 바인딩이라고 부르겠습니다.
//
//	Base* b1 = new Base();
//	Derived* d1 = new Derived();
//	//프로그램 실행 시에 따라 어떤 함수를 실행할 지를 정하게 됩니다.
//	//이를 동적 바인딩이라고 부르겠습니다.
//	b1->Method();
//	d1->Method();
//
//	Base* b2 = new Derived();
//	//부모 클래스로 자식 클래스의 형태로 생성하는 것은 가능합니다.
//	//상속은 이 기능을 이용해 하나의 클래스로 여러 형태의 하위 클래스
//	//의 형태로 만들어 사용할 수 있습니다. 이는 여러 개의 클래스를
//	//만들 필요를 줄일 수 있으며, 함수의 활용에도 도움이 될 수 있습니다.
//	
//	//매개변수로 부모를 넣으면, 자식에도 작업이 진행되면 불필요하게
//	//많은 함수를 만들 필요가 없어지기 때문입니다.
//	
//	MethodTest(b2);
//	//b2->Method();
//	b2 = new Derived2();
//	//b2->Method();
//	MethodTest(b2);
//	//Base를 통해 Derived와 Derived2를 만들었을 경우
//	//클래스 타입에 따라 정해진 함수(Base의 Method)를 실행하게 됩니다.
//
//
//
//
//
//	return 0;
//}