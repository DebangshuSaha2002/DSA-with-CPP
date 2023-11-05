//C++ program to find minimum number of swaps
#include<iostream>
#include<vector>

using namespace std;


int findMinSwap(vector<int> &arr, int n)
{
    // temporary vector to store values, along with its index in the original vector
    vector<pair<int, int> > temp(n);
    for (int i = 0; i < n; i++)
    {
        // values in the vector
        temp[i].first = arr[i];
        // index of the particular value.
        temp[i].second = i;
    }


    //sort the temp vector according to the values
    sort(temp.begin(), temp.end());
    // variable to store the answer
    int minimum_swaps = 0;
    int i = 0;
    while (i < n)
    {
        // If there is no need to swap then continue
        if (temp[i].second == i or temp[i].first == arr[i])
        {
            ++i;
            continue;
        }
        else
        {
            // swap the values accordingly
            swap(temp[i].first, temp[temp[i].second].first);
            // swap the indices also within the temp array also
            swap(temp[i].second, temp[temp[i].second].second);
            // stay on the same position until, we fulfill the criterion
            if (temp[i].second != i)
                i--;
        }
        //increment the answer
        minimum_swaps++;
        // move to the next index
        ++i;
    }
    return minimum_swaps;
}


int main()
{
    vector<int> arr  {5, 3, 1, 7, 2, 6, 4};
    int n = arr.size();
    cout << "Minimum number of swaps required: " << findMinSwap(arr, n) << '\n';
}