//#include <iostream>
//using namespace std;
//
//class Base
//{
//private: //자신의 클래스에서만 접근이 가능합니다. (외부 노출 방지)
//	int A;
//protected : //파생 클래스 까지의 접근을 허용합니다.
//	int B;
//public:   //모든 곳에서 접근을 허용합니다.(공개 데이터)
//	int C;
//};
//class Derived : public Base
//{
//public :
//	void MemberInit(int a, int b, int c);
//};
//class DerivedProtected : protected Base
//{
//public:
//	void MemberInit(int a, int b, int c);
//};
//class DerivedPrivated : private Base
//{
//public:
//	void MemberInit(int a, int b, int c);
//};
//
//int main()
//{
//	Derived d1;
//	DerivedProtected d2;
//	DerivedPrivated d3;
//
//	d1.C = 5;
//	//protected 상속, private 상속으로 구현된 클래스에서 public 필드 값이었던 C의 접근이 안되는 걸 확인할 수 있습니다.
//	
//	//protected 상속 : protected보다 접근 범위가 넓은 멤버를 protected로 변경하여 상속합니다.
//	//public -> protected
//
//	//접근 범위 순서 private < protected < public
//
//	//private 상속 : private보다 접근 범위가 넓은 멤버를 private로 변경하여 상속합니다.
//	// -> 모든 값이 private 처리
//	// 모든 값에 대한 접근을 막는 방식(의미 없는 상속)
//
//	//public 상속 : public보다 접근 범위가 넓은 멤버를 public으로 변경하여 상속합니다.
//	//public보다 범위가 넓은 건 없기 때문에 사실상 그대로 가져오는 것과 동일(가장 많이 하는 상속)
//
//	//d2.C = 6;
//	//d3.C = 7;
//
//
//
//	return 0;
//}
//void Derived::MemberInit(int a, int b, int c)
//{
//	//A = a; error!
//	B = b;
//	C = c;
//}
//
//void DerivedProtected::MemberInit(int a, int b, int c)
//{
////	A = a; error!
//	B = b;
//	C = c;
//}
//
//void DerivedPrivated::MemberInit(int a, int b, int c)
//{
////	A = a; error!
//	B = b;
//	C = c;
//}
