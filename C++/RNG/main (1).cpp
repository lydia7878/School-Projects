#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() 
{
  srand(time(0));

  for (int i = 1; i <=10; i++)
  {
    int diceroll = rand() % 6 + 1;
    cout << diceroll << endl;
  }

  cout << endl;
  return 0;
}