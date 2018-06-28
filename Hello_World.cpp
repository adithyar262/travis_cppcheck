#include <iostream>
using namespace std;

//C++98
std::string f() {
  return "Hello world\n";
}

int main() 
{
  int a[3] = { 0, 1, 2 };
  a[3] = 0; // Access violation!
  std::cout << a[0] << f() << '\n';
}
