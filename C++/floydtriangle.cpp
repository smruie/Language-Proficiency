#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a value n which corresponds to the number of lines : ";
    cin>>n;
    int k=1;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}