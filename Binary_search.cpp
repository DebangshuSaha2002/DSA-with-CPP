#include <iostream>
#include <vector>
#include <algorithm>
#include<stdlib.h>

using namespace std;

int binarySearch(int arr[], int n, int element) {
    int low = 0;
    int high = n - 1;
    int mid;
    int count=0;
    while (low <= high) {
        ++count;
        mid = low + (high - low) / 2;
        if (element =x= arr[mid]) {
            return mid;
        }
        if (element > arr[mid]) {
            low = mid + 1;
        }
        if (element < arr[mid]) {
            high = mid - 1;
        }
    }
    cout<<"count is:"<<count<<endl;
    return -1;
}

int main() {
    int s;
    int ele=10;
    int arr[ele];
    for (int i = 0; i < ele; i++) {
        arr[i] = rand() % 100;
    }
    sort(arr, arr + ele);
    cout << "Array after sorting is:" << endl;
    for (int i = 0; i < ele; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter the element you want to search: ";
    cin >> s;
    cout << "Element is at index: " << binarySearch(arr, ele, s) << endl;
    return 0;
}



