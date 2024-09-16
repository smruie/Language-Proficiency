#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter a number to find its highest digit";
    int num;
    cin>>num;
    int max=0;
    int x;
    while(num>0)
    {
        x = num%10;
        if(x>=max)
        {
            max = x;
        }

        num = num/10;
    
    }

    cout<<"The greatest digit in the number is "<<max;
    return 0;
}