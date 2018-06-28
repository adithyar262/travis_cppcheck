#include <iostream.h>

//C++98
std::string f() {
  return "Hello world\n";
}

int main() 
{
  const int x;
  x = 5;
  int a[3] = { 0, 1, 2 };
  a[3] = 0; // Access violation!
  std::cout << a[0] << f() << '\n';
}
