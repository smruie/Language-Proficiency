#include <iostream>
#include <cmath>
using namespace std;

//Checking in an inputted number is an armstrong number or not
int main()
{
    int input;
    int n;
    int number=0;
    int i;
    cout<<"Enter a number";
    cin>>input;
    n=input;

    while(n>0)
    {
        i = n%10;
        number = number +  (i*i*i);
        n = n/10;
    }
    if(number==input)
    {
        cout<<"The given number is an armstrong number";
    }
    else
    {
        cout<<"The given number is not an armstrong number";
    }
    return 0;

}
