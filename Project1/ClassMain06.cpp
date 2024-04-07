#include "Monster.h"
#include "Slime.h"

//상속 구분 기준
//Is A : ~는 ~이다.로 해석이 되는 경우
//Has A : ~는 ~를 가지고 있다.로 해석이 되는 경우

int main()
{
	//Monster monster[10];
	//클래스의 생성은 프로그램 시작되면서 main 함수 호출 시 진행되었고,
	//main 함수의 종료 시점에 제거되는 것을 확인 할 수 있습니다.

	//클래스에 먼저 필드로 존재하고 있는 MonsterStatus에 대한 생성이 몬스터 생성하면서 진행되기 때문에, 먼저 생성되고
	//삭제도 먼저 됨을 알 수 있습니다.


	//클래스 할당( 위의 방식은 생성과 삭제가 프로그램에 의해 자동으로 설계되는 방식(정적 할당(static allocation)으로, 
	//원하는 타이밍에 생성과 삭제를 할 수 없습니다.
	//따라서 사용자가 직접 생성하고 사용자가 직접 반납할 수 있는 방식의 설계를 진행해야하는 상황이 오는데
	//이를 동적 할당(dynamic allocation)이라고 부르 겠습니다.


	//MonsterStatus* monsterStatus = new MonsterStatus("Cube", 10, 2, 3); //몬스터의 스탯 생성
	//Monster* monster1 = new Monster(*monsterStatus);
	
	//delete monsterStatus;
	//delete monster1;
	//return에 의해 종료되기 전에 delete를 통해 데이터에 대한 반납을 먼저 진행해 monster1이 우선적으로
	//제거가 될 것입니다.(다음 시간에는 이름을 넣어서 확인)

	Slime slime01;
	slime01.Attack();
	slime01.Defence();



	return 0;
}