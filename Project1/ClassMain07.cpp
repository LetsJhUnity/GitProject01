#include <iostream>
using namespace std;

class Sharp
{
private :
	int width, amount;
public :
	int getAmount() { return amount; }
	void setAmount(int amount) { this->amount = amount; }
};
class BallPoint
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
class Fountain
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



int main()
{
	return 0;
}