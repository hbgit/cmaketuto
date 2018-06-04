#include <iostream>
#include <cmath>
#include "TutorialConfig.h"

using namespace std;

// A simple program that computes the square root of a number
#include "TutorialConfig.h"

int main (int argc, char *argv[])
{
  if (argc < 2)
  {
    cout << Tutorial_VERSION_MAJOR << endl;
    cout << argv[0] << endl;
    return 1;
  }
  
  double inputValue = atof(argv[1]);
  double outputValue = sqrt(inputValue);
  cout << "The square root of " << inputValue << " is " << outputValue << endl;
  
  return 0;
}
