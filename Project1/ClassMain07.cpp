#include <iostream>
using namespace std;

//현재 샤프, 볼펜, 만년필에 대한 클래스가 정의되어 있습니다.
//중복적인 부분을 하나의 클래스로 만든 뒤, 상속을 통해 코드를 최적화하시오.

class Sharp   //샤프
{
private :
	int width, amount;
public :
	int getAmount() { return amount; }
	void setAmount(int amount) { this->amount = amount; }
};
class BallPoint //볼펜
{
private:
	int amount;
	string color;
public:
	int getAmount() { return amount; }
	void setAmount(int amount) { this->amount = amount; }
	string getColor() { return color; }
	void setColor(string color) { this->color = color; }
};
class Fountain //만년필
{
private:
	int amount;
	string color;
public:
	int getAmount() { return amount; }
	void setAmount(int amount) { this->amount = amount; }
	string getColor() { return color; }
	void setColor(string color) { this->color = color; }
	void refill(int point) { setAmount(point); }
};
