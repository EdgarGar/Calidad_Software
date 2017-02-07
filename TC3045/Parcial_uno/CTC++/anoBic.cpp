#include <iostream>
using namespace std;

/*int main(int argc, char **argv) {
  if (argc == 2) {
    std::cout << "llamada a bisiesto" << '\n';
  }
  return 0;
}
*/

int main()
{
  int a;2
  cin>>a;
  if(a % 4 == 0 && (a % 100 != 0 || a % 400 == 0))
  {
    cout<<"El anio "<<a<<" Si es bisiesto ";
  }else{
    cout<<"El anio "<<a<<" No es bisiesto ";
  }
  return 0;
}
