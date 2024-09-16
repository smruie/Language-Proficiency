#include<iostream>
using namespace std;

int main()
{
    int amount;
    cin>>amount;

    if(amount>=5000){
        cout<<"Rahul will go with Riya";
    
    }
    else if(amount<=2000)
    {
        cout<<"Rahul will go with his friends";
    }
    else{
        cout<<"Rahul will go alone, lmao";
    }
    return 0;
}