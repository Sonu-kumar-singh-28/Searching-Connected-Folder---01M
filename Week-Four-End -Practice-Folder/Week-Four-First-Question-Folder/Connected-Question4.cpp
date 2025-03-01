// Square root number

#include<iostream>
using namespace std;

int FindSquareRoot(int num)
{
    int target = num;
    int start =0; 
    int end = num-1;
    int mid = start+(end-start) /2;

    int ans = -1;

    while(start<= end)
    {
        if(mid*mid== target)
        {
            ans = mid;
            return mid;
        }
        else if(mid*mid >= target)
        {
            end = mid-1;
        }
        else {
            ans = mid;
            start = mid+1;
        }
        mid = start +(end-start)/2;
    }
    return  ans;
}

int main()
{
    int num;
    cout<<" Enter the number to find Square Root :";
    cin>>num;

    int SquareRoot = FindSquareRoot(num);

    cout<<" The Squrae Root OF the Number is " << SquareRoot << endl;


    int precision;
    cout<<" Enter the digits of precision :";
    cin>>precision;

    double step =0.1;
    double finalans = SquareRoot;

    for(int i=0; i<precision; i++)
    {
        for(double j=0; j*j<=num; j= j+step)
        {
            finalans = j;
        }
        step = step /10;
    }

    cout<<" The Final ans of the Square Root is :" << finalans << endl;
    return 0;
}