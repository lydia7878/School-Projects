#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

//The median m of a sequence of n elements is the element that would fall in the middle if the sequence was sorted. That is, e ≤ m for half the elements, and m ≤ e for the others. Clearly, one can obtain the median by sorting the sequence, but one can do quite a bit better with the following algorithm that finds the kth element of a sequence between a (inclusive) and b (exclusive). (For the median, use k = n/2, a = 0, and b = n.)
//select(k, a, b)
//Pick a pivot p in the subsequence between a and b. Partition the subsequence elements into three subsequences: the elements <p, =p, >p 
//Let n1, n2, n3 be the sizes of each of these subsequences.
//if k < n1 
// return select(k, 0, n1).
//else if (k > n1 + n2) 
// return select(k, n1 + n2, n).
//else 
// return p.
//Implement this algorithm and measure how much faster it is for computing the median of a random large sequence, when compared to sorting the sequence and taking the middle element.

double min_position(vector<double> a, double from, double to){ 
  double min_pos = from;
  for (int i = from + 1; i <= to; i++){ 
    if (a[i] < a[min_pos]) { 
      min_pos = i; 
      }
    }
  return min_pos;
  }

void swap(double x, double y){ 
  double temp = x;
  x = y;
  y = temp;
  }

void selection_sort(vector<double> a, double size){ 
  double next; 
  for (next = 0; next < size - 1; next++){
    double min_pos = min_position(a, next, size - 1);
    if (min_pos != next){   
      swap(a[min_pos], a[next]);
      }
    }
  }

double selectOdd(double a, double b){
  double n = b;
  double k = (n / 2) - 0.5;
  return k;
}

double selectEven(double a, double b){
  double n = b;
  double k = (n / 2) - 1;
  return k;
}

double selectEven2(double a, double b){
  double n = b;
  double k2 = (n / 2);
  return k2;
}

int main() {
  cout << "Enter the first number in the sequence: " << endl;
  
  vector<double> sequence;
  double num1;
  cin >> num1;
  sequence.push_back(num1);

  double numnext;
  while (numnext !=0){
  cout << "Enter the next number in the sequence (Type '0' to find median): " << endl;
  cin >> numnext;
  if (numnext != 0){
  sequence.push_back(numnext);
  }
  else{
  cout << "Here is the sequence you have entered: " << endl;
  int i;
  for(i = 0; i < sequence.size(); i++){
    cout << sequence[i] << endl;
      }
    }
  }
  
  if (sequence.size() % 2 != 0){
    int now = time(0);
    cout << "Sorted, this sequence is: " << endl;
    selection_sort(sequence, sequence.size());
    int i;
    for(i = 0; i < sequence.size(); i++){
    cout << sequence[i] << endl;
      }
    cout << "The median of this sequence is: " << endl;
    cout << sequence[selectOdd(0, sequence.size())] << endl;
    int after = time(0);
    cout << "Elapsed time = " << after - now << " seconds" << endl;
    }
  else{
    int now = time(0);
    cout << "Sorted, this sequence is: " << endl;
    selection_sort(sequence, sequence.size());
    int i;
    for(i = 0; i < sequence.size(); i++){
    cout << sequence[i] << endl;
      }
    cout << "The median of this sequence is: " << endl;
    cout << (sequence[selectEven(0, sequence.size())] + sequence[selectEven2(0, sequence.size())]) / 2 << endl;
    int after = time(0);
    cout << "Elapsed time = " << after - now << " seconds" << endl;
    }
    return 0;
}