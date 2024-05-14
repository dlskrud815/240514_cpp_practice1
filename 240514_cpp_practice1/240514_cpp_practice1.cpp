#include <iostream>
#include "Monster.h"

using namespace std;

int main()
{
	Monster tempMonster;

	Fighter tempFighter;
	Archer tempArcher;
	Wizard tempWizard;

	tempMonster.m_HP; //부모 클래스 public 필드 상속x, 전체 사용 가능
	tempMonster.m_MP; //부모 클래스 private 필드 상속x, 본 클래스에서만 사용
	tempMonster.m_DEF; //부모 클래스 protected 필드 상속x, 본 클래스 및 상속 시에만 사용

	//public 상속
	tempFighter.m_HP; //부모 클래스 public 필드 상속 자식 클래스 public
	tempFighter.m_MP; //부모 클래스 private 필드 상속 자식 클래스 private
	tempFighter.m_DEF; //부모 클래스 protected 필드 상속 자식 클래스 protected
	
	//priavte 상속
	tempArcher.m_HP; //부모 클래스 public 필드 상속 자식 클래스 private
	tempArcher.m_MP; //부모 클래스 private 필드 상속 자식 클래스 private
	tempArcher.m_DEF; //부모 클래스 protected 필드 상속 자식 클래스 private

	//protected 상속
	tempWizard.m_HP; //부모 클래스 public 필드 상속 자식 클래스 protected
	tempWizard.m_MP; //부모 클래스 private 필드 상속 자식 클래스 private
	tempWizard.m_DEF; //부모 클래스 protected 필드 상속 자식 클래스 protected
}
