#include <iostream>
#include <vector>
using namespace std;

int main() {
  cout << "Input a list of numbers seperated by spaces (999 to STOP).\nThis program will determine if they are in ascending order (0->9)." << endl;
  vector<int> vec{};
  int num = 0;
  while (num != 999){
  cin >> num;
  vec.push_back(num);
  }

  if (vec.size() <= 2){
    cout << "This list is too small." << endl;
    return 0;
  }
  
  int i;
  int counter = 0;
  for (i = 0; i < (vec.size() - 2); i++){
    if (vec[i] <= vec[i + 1]){
      counter = counter + 1;
      }
  }

  if (counter == (vec.size() - 2)){
    cout << "Yes (The elements are in ascending order)." << endl;
  }
  else{
    cout << "No (The elements are NOT in ascending order)." << endl;
  }
  return 0;
}