// first occurance cpp

#include<iostream>
#include<vector>
using namespace std;

int findoccurance(vector<int>arr, int size, int target)
{
    int start =0;
    int end = size-1;

    int mid = start+(end-start)/2;

    int ans =-1;

    while(start<= end)
    {
        if(arr[mid] == target)
        {
            ans = mid;
            end = mid-1;
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
    return ans;
}

int main()
{
    int size;
    cout<<" Enter the size of the array:";
    cin>>size;

    vector<int>arr(size);

    for( int i=0; i<arr.size(); i++)
    {
        cout<<" Enter the Element of the array :";
        cin>>arr[i];
    }


    int target;
    cout<<" Enter the taarget you find :";
    cin>>target;

    int firstoccurance = findoccurance(arr, size , target);

    cout<<" The First occurance find at :" <<  firstoccurance << " Index " << endl;
}