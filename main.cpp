#include <iostream>
#include "friends_lib.h"

using namespace std;

int main()
{
	Cents cents1(6);
	Cents cents2(8);
	Cents centsSum = cents1 + cents2;
	std::cout << "The piggy bank contains: " << centsSum.getCents() << " cents." << std::endl;
 
	return 0;
}