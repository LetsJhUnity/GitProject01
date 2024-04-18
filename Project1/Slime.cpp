#include "Slime.h"

int Slime::slime_count = 0;

Slime::Slime()
{
	m_status = MonsterStatus("슬라임", 50, 0, 10);
	cout << "슬라임 유닛이 생성되었습니다!" << endl;
	m_status.GetMonsterStatus();
	slime_count++;
}

Slime::~Slime()
{
	slime_count--;
}
