#pragma once
#include <iostream>

using namespace std;

class Monster
{
public:
	string m_Name;
	int m_HP;
private:
	int m_MP;
protected:
	int m_DEF;

public:
	int GetHP() { return m_HP; }
	int GetMP() { return m_MP; }
	virtual void Func()
	{

	}
};

class Fighter : public Monster
{
public:
	void Func() override //virtual & override
	{
		m_HP; //public
		m_MP; //private 클래스 밖 사용 x
		m_DEF; //protected 상속 ok
	}
};

class Archer : private Monster
{
public:
	void Func() override
	{
		m_HP; //public
		m_MP; //private 클래스 밖 사용 x
		m_DEF; //protected 상속 ok
	}
};

class Wizard : protected Monster
{
public:
	void Func() override
	{
		m_HP; //public
		m_MP; //private 클래스 밖 사용 x
		m_DEF; //protected 상속 ok
	}
};