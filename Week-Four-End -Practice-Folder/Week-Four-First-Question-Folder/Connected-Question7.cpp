// Peak Element  Found in cpp

#include<iostream>
#include<vector>
using namespace std;

int findpeak(vector<int>arr, int size)
{
    int start =0; 
    int end = size-1;
    int mid = start+(end-start) /2;

    int ans; 
    while(start<end)
    {
        if(arr[mid]<arr[mid+1])
        {
          start = mid+1;
        }
        else{
            ans = mid;
           end = mid;
        }
        mid = start+(end-start) /2;
    }
    return ans;
}

int main()
{
    int size;
    cout<<" Enter the size of the array :";
    cin>>size;

    vector<int>arr(size);

    for(int i=0; i<arr.size(); i++)
    {
        cout<<" Enter the element of the array :";
        cin>>arr[i]; 
    }

    int peakelement = findpeak(arr,size);

    cout<<" The PEak element found at :" << peakelement  <<" Index "<< endl;
    cout<<" values of  the ans is : " <<arr[peakelement] << endl;
}