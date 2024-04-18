//#include <iostream>
//using namespace std;
////다형성 이해 예시
//
//class Tea 
//{
//public :
//	virtual void Info() { cout << "이것은 차입니다." << endl; };
//};
//class Lipton : public Tea
//{
//public :
//	void Info() { cout << "이것은 립톤 티입니다." << endl; };
//};
//class Kombu : public Tea
//{
//public :
//	void Info() { cout << "이것은 콤부차입니다." << endl; }
//};
//class Honest : public Tea
//{
//	void Info() { cout << "이것은 어니스트 티입니다. " << endl; }
//};
//
//void SelectMenu(Tea* tea)
//{
//	tea->Info();
//}
//
//int main()
//{
//	int select;
//	while (true)
//	{
//		cout << "메뉴를 선택해주세요 1. 립톤 티 2. 콤부차 3. 어니스트 티 >> ";
//		cin >> select;
//		Tea* tea = NULL;
//		switch (select)
//		{
//		case 1:
//			tea = new Lipton(); break;
//		case 2:
//			tea = new Kombu(); break;
//		case 3:
//			tea = new Honest(); break;
//		}
//
//		if (tea != NULL)
//		{
//			tea->Info();
//		}
//		else
//		{
//			cout << "잘못된 입력입니다." << endl;
//			exit(0);
//		}
//	}
//	return 0;
//}