#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

// Function to swap two elements in an array
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to partition the array using a random pivot element
int partition(vector<int>& arr, int low, int high) {
    int randomIndex = low + rand() % (high - low + 1);
    int pivot = arr[randomIndex];
    swap(arr[randomIndex], arr[high]);

    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Function to perform randomized quicksort
void randomizedQuickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        randomizedQuickSort(arr, low, pi - 1);
        randomizedQuickSort(arr, pi + 1, high);
    }
}

// Driver function to test the code
int main() {
    vector<int> arr = { 10, 7, 8, 9, 1, 5 };
    int n = arr.size();

    randomizedQuickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
