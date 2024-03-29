// =====merge sort======
#include <iostream>
using namespace std;

void merge(int arr[], int ll, int mm, int rr) {
  
  int n1 = mm - ll + 1;
  int n2 = rr - mm;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[ll + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[mm + 1 + j];

  int i, j, k;
  i = 0;
  j = 0;
  k = ll;

  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
  }
}

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++){
    cout << arr[i] << " ";
  }
}

int main(){
    int n;
    cout << "Array size: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cout << "Enter " << (i + 1) << " element: ";
        cin >> arr[i];
    }
    mergeSort(arr, 0, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}