#include <iostream>
using namespace std;

int main()
{
    int choice;
    double a, b;
    double result;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"This is a Calculator \n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n Enter your choice as a number : ";
    cin>>choice;

    switch(choice){
        case 1:
        result = a+b;
        cout<<"The result is "<<result;
        break;

        case 2:
        result = a-b;
        cout<<"The result is "<<result;
        break;

        case 3:
        result = a*b;
        cout<<"The result is "<<result;
        break;

        case 4:
        result = a/b;
        cout<<"The result is "<<result;
        break;
    }
    return 0;

}