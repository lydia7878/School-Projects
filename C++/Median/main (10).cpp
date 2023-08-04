#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

//Implement the following modification of the quicksort algorithm, due to Bentley and McIlroy. Instead of using the first element as the pivot, use an approximation of the median. 
//If n ≤ 7, use the middle element. If n ≤ 40, use the median of the first, middle, and last element. Otherwise compute the “pseudomedian” of the nine elements a[i * (n - 1) / 8], where i ranges from 0 to 8. The pseudomedian of nine values is med(med(v0, v1, v2), med(v3, v4, v5), med(v6, v7, v8)).
//Compare the running time of this modification with that of the original algorithm on sequences that are nearly sorted or reverse sorted, and on sequences with many identical elements. What do you observe

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

double pseudomedian(vector <double> a){
  int i;
  for (i = 0; i <= 8; i++){
    return a[(i * (a.size() - 1) / 8) + 2];
    }
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
    cout << "Elapsed time (Grabbing Middle Element)= " << after - now << " seconds" << endl;
    now = time(0);
    cout << "The median of this sequence is: " << endl;
    cout << pseudomedian(sequence) << endl;
    after = time(0);
    cout << "Elapsed time (Pseudomedian)= " << after - now << " seconds" << endl;
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
    cout << "Elapsed time (Grabbing Middle Element)= " << after - now << " seconds" << endl;
    now = time(0);
    cout << "The median of this sequence is: " << endl;
    cout << pseudomedian(sequence) << endl;
    after = time(0);
    cout << "Elapsed time (Pseudomedian)= " << after - now << " seconds" << endl;
    }
    return 0;
}