#include <iostream>
#include <vector>
using namespace std;

// Function to merge two subarrays in irregular merge sort
void merge(vector<int>& arr, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
 
    vector<int> L(n1), R(n2);
 
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    int i = 0, j = 0, k = l;
 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
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
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Function to perform irregular merge sort
void irregularMergeSort(vector<int>& arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 3;
 
        irregularMergeSort(arr, l, m);
        irregularMergeSort(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }
}

// Driver function to test the code
int main() {
    vector<int> arr = { 12, 11, 13, 5, 6, 7, 8, 9, 10 };
    int n = arr.size();
 
    irregularMergeSort(arr, 0, n - 1);
 
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
 
    return 0;
}