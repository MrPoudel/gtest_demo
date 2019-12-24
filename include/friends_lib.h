#ifndef OVERLOADING_H
#define OVERLOADING_H
 
class Cents
{
private:
	int m_cents;
 
public:
	Cents(int cents);
 
	// add Cents + Cents using a friend function
	friend Cents operator+(const Cents &c1, const Cents &c2);
 
	// subtract Cents - Cents using a friend function
	friend Cents operator-(const Cents &c1, const Cents &c2);
 
	int getCents() const;
}; 

#endif