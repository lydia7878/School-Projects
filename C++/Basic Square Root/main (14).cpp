#include <iostream>
#include <cmath>
using namespace std;

int main() {
cout << "Please input a number:\n";
double n;
double s;
cin >> n;

if (n < 0){
  s = n * n;
  cout << n << ", " << s;
}
else{
  s = sqrt(n);
  cout << n << ", " << s;
}
return 0;
}