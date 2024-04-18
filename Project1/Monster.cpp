#include "Monster.h"

int Monster::count = 0; //count의 개수 0

Monster::Monster()
{
	SetMonsterStatus("",0,0,0);
	count++;
	//cout << "(NULL) 유닛이 생성되었습니다!" << endl;
	cout << "현재 생성된 유닛의 개수 " << count << endl;
}
Monster::Monster(MonsterStatus _status)
{
	m_status = _status;
	count++;
	cout << "유닛이 생성되었습니다!" << endl;
	cout << "현재 생성된 유닛의 개수 " << count << endl;
}
Monster::~Monster()
{
	cout << "유닛이 제거되었습니다." << endl;
	count--; //카운트 1 제거
	cout << "현재 생성된 유닛의 개수 " << count << endl;
}

void Monster::SetMonsterStatus(string _name, int _hp, int defense, int attack)
{
	m_status = MonsterStatus(_name, _hp, defense, attack);
}

void Monster::Attack()
{
	cout << "몬스터의 공격을 진행합니다!" << endl;
}

void Monster::Defence()
{
	cout << "몬스터의 방어를 진행합니다" << endl;
}
