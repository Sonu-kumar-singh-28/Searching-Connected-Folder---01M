#include<iostream>
using namespace std;

int Findans(int divided, int divisor)
{
    int start =0;
    int end = divided;
    int mid = start+(end-start) /2;
    
    int ans = -1;

    while(start<=end)
    {
        if(mid*divisor == divided)
        {
            ans =  mid;
            return mid;
        }
        else if(mid*divisor >= divided)
        {
            end = mid-1;
        }
        else {
            ans = mid;
            start = mid+1;
        }
        mid = start+(end-start) /2;
    }
    return ans;
}

int main()
{
    int divided;
    cout<<" Enter the Number to be divided :";
    cin>>divided;

    int divisor;
    cout<<" Enter the Number to be Divided the number :";
    cin>>divisor;

    int ans = Findans(divided, divisor);
    cout<<" the Number is :" << ans << endl;


    int precision;
    cout<<" Enter the Digits of Precision :" ;
    cin>>precision;

    double step = 0.1;
    double finalans = ans;

    for(int i=0; i<precision; i++)
    {
        for(double j=ans; j<divided; j= j+step)
        {
            finalans =j;
        }
        step = step /10;
    }
    cout<<" The Final ans of the number is :"<< finalans << endl;
    return 0;
}