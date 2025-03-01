#include<iostream>
#include<vector>
using namespace std;

int findpivotelement(vector<int>arr, int size)
{
    int start =0;
    int end = size-1;
    int mid = start +(end-start)/2;


    while(start<= end)
    {
        if(mid+1<= end && arr[mid]>arr[mid+1])
        {
            return mid;
        }
        if(mid-1>=start && arr[mid-1]>arr[mid])
        {
            return mid-1;
        }
        if(arr[start] >arr[mid])
        {
            end = mid-1;
        }
        else 
        {
            start = mid+1;
        }
        mid = start+(end-start) /2;
    }
    return -1; 
}

int main()
{
    int size;
    cout<<" Enter the size of the ararY : ";
    cin>>size;

    vector<int>arr(size);

    for( int i=0; i<arr.size(); i++)
    {
        cout<<" Enter the Element of the array :";
        cin>>arr[i];
    }

    int pivotelement = findpivotelement(arr,size);

    if(pivotelement == -1)
    {
        cout<<" Kuch gadbad hai :";
    }
    else{
    cout<<" The  pivot element  is :" << pivotelement << " index "<< endl;
    cout<<" Values of ans is : " << arr[pivotelement] << endl;
    }
    return 0;
}