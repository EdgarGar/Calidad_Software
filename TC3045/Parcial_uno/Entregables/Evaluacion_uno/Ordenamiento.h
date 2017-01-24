//Extraido de https://thilinasameera.wordpress.com/2011/06/01/sorting-algorithms-sample-codes-on-java-c-and-matlab/

#include <iostream>


template <class T>
class Ordenamiento {
public:
  static void bubbleSort(T [], int, bool(*) (T, T));
  static void insercionSort(T [], int, bool(*) (T, T));
  static void seleccionSort(T [], int, bool(*) (T, T));
  static bool asc(T, T);
};
template <class T>
bool Ordenamiento<T>::asc(T a, T b)
{
  return a > b;
}

template <class T>
void Ordenamiento<T>::bubbleSort(T v[] , int n, bool compara (T, T))
{
  T temp;
  for (int i = 0; i < n; i++)
  {
    for (int j = n-1; j > i; j--)
    {
      if ( compara(v[j-1], v[j]) )
      {
        temp = v[j-1];
        v[j-1] = v[j];
        v[j] = temp;
      }
    }
  }
}

template <class T>
void Ordenamiento<T>::insercionSort(T v[], int n, bool compara (T, T))
{
  T index;
  for (int i=1; i < n; i++)
  {
    index = v[i];
    int j = i-1;
    while ( j >= 0 && compara(v[j], index))
    {
      v[j + 1] = v[j];
      j--;
    }
    v[j+1] = index;
  }
}

template <class T>
void Ordenamiento<T>::seleccionSort(T v[], int n, bool compara (T, T))
{
  int minimo = 0;
  T temp;
  for(int i = 0; i < n-1; i++)
  {
    minimo = i;
    for(int j = i + 1; j < n; j++)
    {
      if (compara(v[minimo], v[j]) )
      minimo = j;
    }
    temp = v[minimo];
    v[minimo] = v[i];
    v[i] = temp;
  }
}
