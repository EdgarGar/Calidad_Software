#include <iostream>
#include <fstream>
using namespace std;

class Cesar : public Cifrado
{
public:
  void Cesar(){}
  void Cesar(){}
};

int main () {
  ofstream myfile;
  myfile.open ("example.txt");
  myfile << "Writing this to a file.\n";
  myfile.close();
  return 0;
}
