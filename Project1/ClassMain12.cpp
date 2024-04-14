#include <iostream>
using namespace std;
//문제 2) 다음과 같은 실행 정보를 가진 프로그램을 main에서 구현하고
//책에 해당하는 클래스 Book과 필요하다면 연산자를 수정해 클래스를 설계하시오.
//현재 책 정보 -> 이름 : A 읽은 페이지 100 Page / 500 Page
//읽은 만큼의 페이지를 입력해주세요 >> 47
//현재 책 정보 -> 이름 : A 읽은 페이지 147 Page / 500 page
//읽은 만큼의 페이지를 입력해주세요 >> 400
//최대 페이지를 넘게 읽을 수 없습니다!
#define MAX 500
class Book
{
private : 
	string name;
	int read_page;
	int max_page;
public :
	Book(string name) : name(name)
	{
		read_page = 0;
		max_page = MAX;
	}
	Book operator+(int value)
	{
		if (value + read_page > max_page)
		{
			cout << "최대 페이지를 넘게 읽을 수 없습니다!" << endl;
			return *this;
		}
		read_page += value;
		return *this;
	}
	void Info()
	{
		cout << "이름 : " << name << " 읽은 페이지 " << read_page << " Page " << " / " << max_page << " Page" << endl;
	}
};

int main()
{
	Book b("A");
	int page;
	while(true)
	{
		b.Info();
		cout << "읽은 만큼의 페이지를 입력해주세요 >> ";
		cin >> page;
		b = b + page;
		//break;
	}


	return 0;
}

