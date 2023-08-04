#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//Implement the merge_sort function without recursion, where the size of the array is an arbitrary number. Hint: Keep merging adjacent areas whose size is a power of 2, and pay special attention to the last area whose size is less.

void merge(int arr[], int l, int m, int r);
 
void mergeSort(int arr[], int l, int r){
  if (l < r){
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
  }
}

void merge(int arr[], int l, int m, int r){
  int k;
  int n1 = m - l + 1;
  int n2 =  r - m;
  int L[n1], R[n2];
  for(int i = 0; i < n1; i++){
    L[i] = arr[l + i];
  }
  for(int j = 0; j < n2; j++){
    R[j] = arr[m + 1+ j];
  }
  int i = 0;
  int j = 0;
  k = l;
  while (i < n1 && j < n2){
    if (L[i] <= R[j]){
      arr[k] = L[i];
      i++;
    }
    else{
      arr[k] = R[j];
      j++;
    }
    k++;
  }
  while (i < n1){
    arr[k] = L[i];
    i++;
    k++;
  }
  while (j < n2){
    arr[k] = R[j];
    j++;
    k++;
  }
}

void printArray(int A[], int size){
  for(int i = 0; i < size; i++)
    printf("%d ", A[i]);
    cout << "\n";
}
 
int main(){
  int arr[] = { 12, 11, 13, 5, 6, 7 };
  int arr_size = sizeof(arr) / sizeof(arr[0]);
  cout << "Given array is \n";
  printArray(arr, arr_size);
  int now = time(0);
  mergeSort(arr, 0, arr_size - 1);
  cout << "\nSorted array is \n";
  printArray(arr, arr_size);
  int after = time(0);
  cout << "Elapsed time = " << after - now << " seconds" << endl;
  return 0;
}