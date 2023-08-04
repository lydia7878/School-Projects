#include <iostream>
#include <string>
#include <bits/stdc++.h> 
using namespace std;
//Sometimes, directory or file names have numbers in the middle, and there may be more than one number, for example, sec3_14.txt or sec10_1.txt. Provide a comparison operator that can compare such strings in a way that makes sense to humans. Break each string into strings not containing digits and digit groups. Then compare two strings by comparing the first non-digit groups as strings, the first digit groups as integers, and so on.


void nondigit(string f1){
  char arr[f1.length() + 1]; 
  strcpy(arr, f1.c_str()); 
  for (int i = 0; i < f1.length(); i++){
    if (arr[i] != '0' && arr[i] != '1' && arr[i] != '2' && arr[i] != '3' && arr[i] != '4' && arr[i] != '5' && arr[i] != '6' && arr[i] != '7' && arr[i] != '8' && arr[i] != '9' && arr[i] != '.' && arr[i] != '_'){
      cout << arr[i];
    }
  }
}

void digit(string f1){
  char arr[f1.length() + 1]; 
  strcpy(arr, f1.c_str()); 
  for (int i = 0; i < f1.length(); i++){
    if (arr[i] != 'a' && arr[i] != 'b' && arr[i] != 'c' && arr[i] != 'd' && arr[i] != 'e' && arr[i] != 'f' && arr[i] != 'g' && arr[i] != 'h' && arr[i] != 'i' && arr[i] != 'j' && arr[i] != 'k' && arr[i] != 'l' && arr[i] != 'm' && arr[i] != 'n' && arr[i] != 'o' && arr[i] != 'p' && arr[i] != 'q' && arr[i] != 'r' && arr[i] != 's' && arr[i] != 't' && arr[i] != 'u' && arr[i] != 'v' && arr[i] != 'w' && arr[i] != 'x' && arr[i] != 'y' && arr[i] != 'z' && arr[i] != 'A' && arr[i] != 'B' && arr[i] != 'C' && arr[i] != 'D' && arr[i] != 'E' && arr[i] != 'F' && arr[i] != 'G' && arr[i] != 'H' && arr[i] != 'I' && arr[i] != 'J' && arr[i] != 'K' && arr[i] != 'L' && arr[i] != 'M' && arr[i] != 'N' && arr[i] != 'O' && arr[i] != 'P' && arr[i] != 'Q' && arr[i] != 'R' && arr[i] != 'S' && arr[i] != 'T' && arr[i] != 'U' && arr[i] != 'V' && arr[i] != 'W' && arr[i] != 'X' && arr[i] != 'Y' && arr[i] != 'Z' && arr[i] != '.' && arr[i] != '_'){
      cout << arr[i];
    }
  }
}

int main() {
  cout << "Input the first filename (no special characters, use _ for space): " << endl;
  string fn1;
  cin >> fn1;
  cout << "Input the second filename (no special characters, use _ for space): " << endl;
  string fn2;
  cin >> fn2;
  cout << "The nondigit characters are: " << endl;
  nondigit(fn1);
  nondigit(fn2);
  cout << "\nThe digit characters are: " << endl;
  digit(fn1);
  digit(fn2);
  return 0;
}