#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value n : ";
    cin>>n;
    int a;

    for(int i=1; i<=n; i++)
    {
        a = i+1;
        for(int j=1; j<=i; j++)
        {
            a = a-1;
            cout<<a;
        }
        cout<<endl;
    }
    return 0;
}