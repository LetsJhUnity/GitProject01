#pragma once
#ifndef _SLIME_H_
#define _SLIME_H_

#include "Monster.h"
//슬라임 클래스는 Monster이다.(is A)
class Slime : public Monster
{
public :
	Slime(); //생성자
	~Slime(); //소멸자
private :
	static int slime_count;
};
#endif

