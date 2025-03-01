// Total Occurance in cpp


#include<iostream>
#include<vector>
using namespace std;

int findfoccurance(vector<int>arr, int size, int target)
{
    int start =0; 
    int end = size-1;
    int mid = start+(end-start) /2;
    int ans = -1;

    while(start<= end)
    {
        if(arr[mid] == target)
        {
            ans = mid;
            end= mid-1;
        }
        else if(arr[mid]>= target)
        {
            end = mid-1;
        }
        else {
            start = mid+1;
        }
        mid = start +(end-start) /2;
    }
    return ans;
}


int findloccurance(vector<int>arr, int size, int target)
{
    int start =0; 
    int end = size-1;
    int mid = start+(end-start) /2;
    int ans = -1;

    while(start<= end)
    {
        if(arr[mid] == target)
        {
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid]>= target)
        {
            end = mid-1;
        }
        else {
            start = mid+1;
        }
        mid = start +(end-start) /2;
    }
    return ans;
}

int main()
{
    int size;
    cout<<" Enter the size of the array :";
    cin>>size;

    vector<int>arr(size);

    for( int i=0; i<arr.size(); i++)
    {
        cout<<"Enter the element of the array :";
        cin>>arr[i];
    }

    int target;
    cout<<" Enter the target you find :";
    cin>>target;


    int firstoccurance = findfoccurance(arr,size, target);
    int lastoccurance = findloccurance(arr,size, target);


    cout<<" The First  occurance find at " << firstoccurance<< " Index " << endl;
    cout<<" The Last occurance find at " << lastoccurance << " Index " << endl;

    if (firstoccurance == -1) {
        cout << "The element not found in the array." << endl;
    } else {
        cout << "The target: " << target << " The total occurrences found: " << lastoccurance - firstoccurance + 1 << endl;
    }
    return 0;
}