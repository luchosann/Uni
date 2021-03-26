// arrays
#include <iostream>
using namespace std;

int foo[5][5] = {16, 2, 77, 40, 12071,16, 2, 77, 40, 12071,16, 2, 77, 40, 12071,16, 2, 77, 40, 12071,16, 2, 77, 40, 12071};
int n,i, resultado=0;

int main ()
{
for ( i=0 ; i<5 ; ++i )
  for ( n=0 ; n<5 ; ++n )
  {
    resultado += foo[n][i];
  }
  cout << resultado;
  return 0;
}
