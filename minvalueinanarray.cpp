#include <iostream>

using namespace std;

int
main ()
{
  int size[8] = { 1, 20, 31, 14, 52, 90, 107, 0 };
  int min = size[8];
  for (int i = 1; i < 8; i++)
    {
      if (size[i] < min)
	{
	  min = size[i];
	}
    }
  cout << min << endl;
}
