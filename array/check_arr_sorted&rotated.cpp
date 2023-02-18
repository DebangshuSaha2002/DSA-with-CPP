//Check whether an array is sorted and rotated

#include<iostream>
using namespace std;

bool check_sorted_rotated(int nums[],int n)
{
    int count=0;
    for(int i=1;i<n;i++)
    {
        if(nums[i-1]>nums[i])
        {
            count++;
        }
    }
    if(nums[n-1]>nums[0])
    {
        count++;
    }

    return count<=1;
}

int main()
{
    int nums[5] = {3,4,5,1,2};
    cout<<"The array is sorted and rotated:"<<check_sorted_rotated(nums,5);
}