#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "Think of an insect. This program will determine whether or not if your insect is a spider. \n(Reply with Y or N)" << endl;
  cout << "\nQuestion 1: Does your insect have wings?" << endl;
  char response1;
  cin >> response1;
  if (response1 == 'Y'){
    cout << "Your insect is not a spider." << endl;
  }
  else{
    cout << "\nQuestion 2: Does your insect have six legs or more?" << endl;
    char response2;
    cin >> response2;
    if (response2 == 'N'){
      cout << "Your insect is not a spider." << endl;
    }
    else{
      cout << "\nQuestion 3: Does your insect have antennae?" << endl;
      char response3;
      cin >> response3;
      if (response3 == 'Y'){
        cout << "Your insect is not a spider." << endl;
      }
      else{
        cout << "\nQuestion 4: Does your insect have a stinging tail?" << endl;
        char response4;
        cin >> response4;
        if (response4 == 'Y'){
        cout << "Your insect is not a spider." << endl;
        }
        else{
          cout << "\nYour insect is in fact, a spider." << endl;
        }
      }
    }
  }
  return 0;
}