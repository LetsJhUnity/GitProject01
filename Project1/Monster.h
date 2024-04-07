#pragma once
//헤더가 중복적으로 사용되는 것을 방지하기 위해 설계
#ifndef _MONSTER_H_
#define _MONSTER_H_

#include "MonsterStatus.h"

//전처리기 ifdef는 해당 값이 정의되어 있다면에 대한  작업을 진행할 수 있습니다.
//전처리기 ifndef는 컴파일이 되어있지 않을 경우에 대한 내용을 컴파일 할 수 있습니다.
//전처리기 else는 위의 ifdef나 ifndef의 조건과 반대의 경우를 설계하는 코드
//전처리기 endif는 조건문의 마지막에 넣어주는 코드

//클래스(cpp + h)
//h : 클래스 설계
//cpp : 클래스에서 설계한 함수에 대한 구현

class Monster
{
//private -> protected (2024-04-07)
protected :
	MonsterStatus m_status;
	//Has a 상속
	//몬스터 클래스는 몬스터 스테이터스 클래스를 가지고 있습니다.
	static int count; //몬스터의 개수(static : 전역)
public :
	Monster();
	Monster(MonsterStatus);
	~Monster();
	void SetMonsterStatus(string _name, int _hp, int defense, int attack);
	void Attack();
	void Defence();
};

#endif;
//해당 코드의 처리 방식 
//1. ifndef _MONSTER_H를 읽는다.
//2. _MONSTER_H가 정의되어 있으므로, endif 까지의 내용을 읽어낸다.
