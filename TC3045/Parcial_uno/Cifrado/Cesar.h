#include "Cifrado.h"
#include <algorithm>
#include <fstream>

class Cesar : public Cifrado
{
public:
  Cesar(){}
  ~Cesar(){}
  int desdencriptado(string words);
  int ofset = 0;
  string line;
  ifstream diccionario("diccionario.txt");
  if (diccionarion.is_open())
  {
    while(ofset <= 26)
    {
      for (i = 0; i < words.size(); i++) {
        temwords[] = ((words[i] + ofset) % 26))
      }
      while(getline(diccionarion.line)
      {
        if(temwords.compare(line))
        {
          diccionarion.close();
        }
      }
    }
  }
};
