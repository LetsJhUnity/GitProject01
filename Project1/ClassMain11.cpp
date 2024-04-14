//#include <iostream>
//using namespace std;
////다음과 같은 결과가 나올 수 있도록 클래스 Student를 설계하시오.
//class Student
//{
//private :
//	string name;
//	int age;
//public :
//	Student(string name, int age) : name(name), age(age) {}
//
//	Student operator=(const Student& other)
//	{
//		name = other.name;
//		//return *this;
//		return Student(name, age);
//	}
//
//	//void operator=(const Student& other)
//	//{
//	//	name = other.name;
//	//	//return *this;
//	//}
//
//	void StudentInfo()
//	{
//		cout << "이름 : " << name << " 나이 : " << age << endl;
//	}
//};
//
//
//int main()
//{
//	Student s1("이세영", 17);
//	Student s2("김익현", 18);
//
//	s1 = s2;
//
//	s1.StudentInfo();
//	s2.StudentInfo();
//
//	//실행 결과
//	//이름 : 김익현 나이 17
//	//이름 : 김익현 나이 18
//
//
//	//문제 2) 다음과 같은 실행 정보를 가진 프로그램을 main에서 구현하고
//	//책에 해당하는 클래스 Book과 필요하다면 연산자를 수정해 클래스를 설계하시오.
//	
//	//현재 책 정보 -> 이름 : A 읽은 페이지 100 Page / 500 Page
//	//읽은 만큼의 페이지를 입력해주세요 >> 47
//	//현재 책 정보 -> 이름 : A 읽은 페이지 147 Page / 500 page
//	//읽은 만큼의 페이지를 입력해주세요 >> 400
//	//최대 페이지를 넘게 읽을 수 없습니다!
//	return 0;
//}