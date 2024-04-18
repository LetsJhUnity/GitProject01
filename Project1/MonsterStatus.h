#pragma once
#ifndef _MONSTERSTATUS_H_
#define _MONSTERSTATUS_H_
using namespace std;
#include <string>
#include <iostream>

class MonsterStatus
{
public :
	MonsterStatus(); //default 생성자 (클래스에 대한 선언을 할 수 있게 해주는 역할)
	MonsterStatus(string _name, int _hp, int _defense, int _attack);
	~MonsterStatus(); // ~가 붙은 생성자 -> 소멸자(객체가 파괴될 때 호출할 메소드)
	void SetName(string _name);
	void SetHp(int _hp);
	void SetDefense(int _defense);
	void SetAttack(int _attack);
	void GetMonsterStatus();
private :
	string m_name;
	int m_hp;
	int m_defense;
	int m_attack;
};
#endif

