#include <iostream>
#include <cmath>
using namespace std;

int
main ()
{
  int originalNum, rem, n = 0, result = 0;
  cout << "Armstrong numbers between 1 to 1000: ";

  for (int i = 1; i <= 1000; ++i)
    {
      originalNum = i;

      while (originalNum != 0)
	{
	  originalNum /= 10;
	  ++n;
	}

      originalNum = i;

      while (originalNum != 0)
	{
	  rem = originalNum % 10;
	  result += pow (rem, n);
	  originalNum /= 10;
	}

      if (result == i)
	{
	  cout << i << " ";
	}

      n = 0;
      result = 0;
    }

  return 0;
}


