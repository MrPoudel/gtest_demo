#include "friends_lib.h"
 
Cents::Cents(int cents) 
{ 
	m_cents = cents; 
}

int Cents::getCents() const 
{ 
	return m_cents;
}
 
// note: this function is not a member function!
Cents operator+(const Cents &c1, const Cents &c2)
{
	// use the Cents constructor and operator+(int, int)
	// we can access m_cents directly because this is a friend function
	return Cents(c1.m_cents + c2.m_cents);
}
 
// note: this function is not a member function!
Cents operator-(const Cents &c1, const Cents &c2)
{
	// use the Cents constructor and operator-(int, int)
	// we can access m_cents directly because this is a friend function
	return Cents(c1.m_cents - c2.m_cents);
} 
