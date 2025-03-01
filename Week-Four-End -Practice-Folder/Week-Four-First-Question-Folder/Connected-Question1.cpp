#include<iostream>
#include<vector>
using namespace std;

int findbinary(vector<int>arr, int size, int target)
{
    int start =0; 
    int end = size-1;

    int mid = start+(end-start) /2;

    int ans = -1;

    while(start <= end)
    {
        if(arr[mid] == target)
        {
            ans = mid;
            return mid;
        }
        else if(arr[mid]>= target)
        {
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start+(end-start) /2;
    }
    return  ans;
}

int main()
{
    int size;
    cout<<" ENter the size ofr the array :";
    cin>>size;

    vector<int>arr(size);

    for( int i=0; i<arr.size(); i++)
    {
        cout<<" Enter  the element of the array";
        cin>>arr[i];
    }

    int target;
    cout<<" Enter the target you find :";
    cin>>target;


    int binarysearch = findbinary(arr,size, target);

    cout<<" Element Found at " << binarysearch << " Index" << endl;
}