#include <iostream>

using namespace std;

int
main ()
{
  int size[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
  int max = size[0];
  for (int i = 1; i < 8; i++)
    {
      if (size[i] > max)
	{
	  max = size[i];
	}
    }
  cout << max << endl;
}
