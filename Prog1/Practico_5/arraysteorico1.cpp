// arrays
#include <iostream>
using namespace std;

int foo [] = {16, 2, 77, 40, 12071};
int n, resultado=0;

int main ()
{
  for ( n=0 ; n<5 ; ++n )
  {
    resultado += foo[n];
  }
  cout << resultado;
  return 0;
}
