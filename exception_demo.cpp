#include <iostream>
#include <stdexcept>

/* Types of exceptions in C++ 
std:bad_alloc
std:bad_cast
std:logic_failure
std:bad_typeid
std:bad_exception
std:runtime_error
*/

using namespace std;

int main()
{
 
 int a = 10, b =0, c;

try{
    if(b == 0)
       throw runtime_error("divide by zero error");
    c = a/b;
    cout << c << endl;
}catch (runtime_error &error){

  cout << "exception occured" << endl;
  cout << error.what() << endl;
}


 return 0;
}
